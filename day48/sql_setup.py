#导入csv模块，用来读取csv表格文件
import csv
#导入os模块，用来处理文件路径
import os
#导入sqlite3，Python内置数据库，用来操作sqlite数据库
import sqlite3
# 数据源：你 11/6 上午爬下来的 50 条名言
csv_path = r"D:\zab\day47\data\data.csv"
db_path = os.path.join(os.path.dirname(os.path.abspath(__file__)), "quotes.db")
# __file__：当前这个 py 文件的完整路径
# os.path.abspath(__file__)：拿到绝对路径（不会出现转义方面的问题）
# os.path.dirname()：取出该文件所在文件夹
# os.path.join()：拼接路径，在同目录生成 quotes.db 数据库
conn = sqlite3.connect(db_path)
#连接sqlite数据库；文件不存在就自动新建
cur = conn.cursor()
#创建游标cur,所有SQL语句都要靠游标执行

# 建两张表：quotes 是"一"，tags 是"多"（一条名言可以挂好几个标签）
#如果quotes表已经存在，先删除，方便重复运行脚本重建表
cur.execute("DROP TABLE IF EXISTS quotes")
#如果tags表已经存在，先删除
cur.execute("DROP TABLE IF EXISTS tags")
#先建主表quotes
cur.execute("""CREATE TABLE quotes (
    id     INTEGER PRIMARY KEY,   
    text   TEXT,
    author TEXT
)""")
#创建标签从表tags，和名言是一对多
cur.execute("""CREATE TABLE tags (
    id       INTEGER PRIMARY KEY,
    quote_id INTEGER,
    tag      TEXT
)""")
#打开csv文件，编码utf-8-sig,给Excel读的csv要带BOM
with open(csv_path, encoding="utf-8-sig") as f:
    #创建csv读取器，按行读取表格
    reader = csv.reader(f)
    #next（reader）：跳过第一行表头，不读取标题
    next(reader)
    #quote_id 用来给名言编号，初始化为0
    quote_id = 0
    #循环，读取csv里面的每一行
    for row in reader:
        #如果这一行的元素数量小于2，说明数据残缺，跳过
        if len(row) < 2:
            continue
        #编号加一，作为这条名言的id
        quote_id += 1
        # 执行插入 SQL，往 quotes 存入一条名言
        # ? 是占位符，后面元组依次填充，防止 SQL 注入
        cur.execute("INSERT INTO quotes (id, text, author) VALUES (?, ?, ?)",
                    (quote_id, row[0], row[1]))
        print(row[0],row[1])
        # 如果这一行有第 3 列，取出作为标签字符串；否则赋值为空
        tag_str = row[2] if len(row) > 2 else ""
        # 如果标签字符串不为空，才继续处理
        if tag_str:
            # 以 "+" 作为分隔符，把一串标签切分成多个标签
            for t in tag_str.split("+"):   # 一个格子里是 a+b+c，拆成三行
                # strip()：去掉标签前后多余空格
                # 把单个标签插入 tags 表，绑定对应名言编号
                cur.execute("INSERT INTO tags (quote_id, tag) VALUES (?, ?)",
                            (quote_id, t.strip()))
# commit：提交事务，把内存里所有插入真正写入数据库文件
conn.commit()

# 对账：两张表的行数要跟你的 CSV 对得上
# SQL：统计 quotes 表里一共有多少条记录
cur.execute("SELECT COUNT(*) FROM quotes")
# fetchone() 获取查询返回的一行，[0] 取出计数值并打印
print("quotes 行数：", cur.fetchone()[0])
# SQL：统计 tags 表里一共有多少条标签
cur.execute("SELECT COUNT(*) FROM tags")
print("tags 行数：   ", cur.fetchone()[0])
conn.close()
print("数据库位置：", db_path)

