import sys
# 导入 sys 模块，用来获取当前正在运行的 Python 解释器信息
print(sys.executable)
# 打印当前 python.exe 的完整路径，用来确认现在用的是哪一个解释器，防止环境串掉
from bs4 import BeautifulSoup
# 从 bs4 库导入网页解析工具 BeautifulSoup
content = open("D:/zab/day45/quotes.html", "r", encoding="utf-8").read()
# open 以只读模式打开本地保存的网页，编码 utf-8；.read() 一次性把全部内容读成字符串
soup = BeautifulSoup(content, "html.parser")
#把网页字符串交给 BeautifulSoup，用 Python 自带的 html.parser 构建文档树，得到 soup 对象
#features 参数
#作用：指定用哪一个解析引擎，把一串杂乱的 HTML 文本，翻译成一棵可以查找遍历的标签树
#"html.parser"：Python 自带内置解析器，不用额外 pip 装任何包，开箱就能跑
quotes1 = soup.find_all("span", class_="text")
# find_all：找出【全部】满足条件的标签
# name="span"：标签是 span；class_="text"：class 属性等于 text
# 返回一个列表，里面每一项都是标签对象
for q in quotes1:
    print(q.text)
    # q.text：提取标签内部纯文本，自动剔除尖括号 HTML
quotes2 = soup.find_all("small", class_="author")
for q in quotes2:
    print(q.text) #不是写.author，这里的.text是打印文字的意思
quotes3 = soup.find_all("a", class_="tag")
for q in quotes3:
    print(q.text)
print("\n")
for q in soup.find_all(class_="text")[:1]:  #只按 class 找，不指定标签名，然后问它“你是什么标签”。.name 是标签对象的另一个属性（跟 .text 是兄弟：一个给标签名，一个给里面的文字）。
#[:1]是只打印第一个的标签,避免刷屏
    print(q.name)
for q in soup.find_all(class_="author")[:1]:
    print(q.name)
for q in soup.find_all(class_="tag")[:1]:
    print(q.name)
print("\n")
sure=soup.find_all(class_="quote")[0].name
print(sure)
# find_all 返回列表，[0] 直接拿匹配到的第 0 个（第一个）元素
#找到每一个 class="quote" 的大盒子（每一条名言的整块容器）
for box in soup.find_all(class_="quote"):
    # 在这个盒子【内部】继续查找，而不是在整个网页搜
    Text=box.find(class_="text")
    Author=box.find(class_="author")
    Tag=box.find_all(class_="tag")
    names=[]
    # 新建空列表，用来存放这条名言所有标签文字
    print(Text)
    for i in Tag:
        names.append(i.text)
        # 把每个标签文字放进列表
    print("+".join(names))
    # 用加号把列表里所有字符串拼在一起
    print(Author)
print(len(soup.find_all(class_="quote")))

