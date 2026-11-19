import pandas as pd
# 第 0 步：读表
df = pd.read_csv("students.csv")
print(df)
# 表头单独排成一行，左边多出来的那列数字是序号（但是是从0开始的）
# 第 1 例：头尾
print(df.head(3))
print(df.tail(2))
# 第一个：输出前三行（从头开始） 第二个：输出后两行（从尾部开始）

# 第 2 例：形状
print(df.shape)
# 十行四列

# 第 3 例：取一列
shuxue = df["数学"]
print(shuxue)
print(type(shuxue))
# 返回数学那一列数据和序号 type判断数据类型

# 第 4 例：取一行
print(df.loc[3])   #3只是标签，实际上拿到的是第四个学生,得到的是series
#df.loc[行怎么选, 列怎么选]

# 第 5 例：新增一列（整块运算）
df["总分"] = df["语文"] + df["数学"] + df["英语"]
print(df)
# 新列出现在最后一列，没有使用循环

# 第 6 例：一整套统计
print(df.describe())  #“姓名”那列自动消失了，因为它是文字，算不了平均
# 默认返回八个数据
# count —— 非空值的个数（不是“一共几行”！有空格子就少）
# mean —— 平均值
# std —— 标准差（默认是“样本标准差”，除以 n−1）
# min —— 最小值
# 25% —— 第一四分位数：排好序后 25% 位置的值
# 50% —— 中位数：正中间那个值
# 75% —— 第三四分位数
# max —— 最大值

# 第 7 例：排序
print(df.sort_values("总分", ascending=False)) #ascending true升序，false降序
# 按总分排序

# 第 8 例：布尔筛子
print(df[df["数学"] > 85])
# 筛出四个人

# 第 9 例：单列平均
print(df["语文"].mean())
# 求单列平均分

# 第 10 例：pandas 和 numpy 各管什么？
# 1. numpy 管"数怎么算"：同一种类型的纯数字数组，批量运算、切片、广播、矩阵乘——它不认识列名和姓名
# 2. pandas 管"表怎么组织、怎么查"：带标签的表格，按列名/行标签取数、筛行、统计、排序
# 3. 关系：pandas 的每一列底层就是 numpy 数组——pandas 是"带名字的表格"，numpy 是"裸矩阵"