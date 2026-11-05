import requests
# 导入 requests 库：专门用来发送网络请求、爬取网页，是爬虫最常用的库
r = requests.get(url="https: // quotes.toscrape.com /", timeout=5)
# requests.get()：发送 GET 请求，向这个网址拿网页
# url="xxx"：命名参数，指定目标网页地址
# timeout=5：超时设置，如果 5 秒连不上网站直接报错，防止程序卡死
# 返回的 r 是一个 Response 对象，包含响应码、网页源码、请求头等一大堆信息
print(r.status_code, len(r.text))
# r.status_code：响应状态码，200 = 请求成功；404=找不到页面，500=服务器出错
# r.text：网页源码（字符串）；len(r.text)：统计源码一共有多少个字符
f = open("D:/zab/day45/quotes.html", "w", encoding="utf-8")
# open(路径, 模式, 编码)：打开文件，拿到文件对象 f
# "w" →write写入模式：如果文件不存在就新建；如果已经存在，直接清空原有内容
# encoding="utf-8"：规定读写编码，防止中文乱码
f.write(r.text)
# 文件对象.write(字符串)：把网页源码写入这个 html 文件
f2 = open("D:/zab/day45/quotes.html", "r", encoding="utf-8")
# "r" →read只读模式，只能读取文件，不能修改
content = f2.read()
# 文件对象.read()：一次性把整个文件全部读出来，存入字符串 content
if len(content) == len(r.text):
# if 条件判断：比较「刚刚保存进文件的字符长度」和「网络拿到源码的字符长度」
    print(f'对账通过，{len(r.text)}')
# f-string 格式化字符串，把变量直接塞进字符串里面打印
else:
    print(f'对账失败，{len(r.text)} {len(content)}')
# 如果两者长度不一样，说明写入的时候丢内容了，打印两边长度排查
f.close()
# 文件对象.close()：关闭写入的文件；释放系统资源
# 如果不 close，极端情况数据留在缓冲区，不会真正写到磁盘
f2.close()
# 关闭读文件的句柄
print("写完了")
# 控制台输出提示，代表全部代码跑