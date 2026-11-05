import re  #导入正则表达式模块，后面批量命名一般用来匹配、截取文件名
import os  #导入操作系统模块，用来访问文件夹、读取文件名、重命名文件，这是这一段代码的核心。
path=r"D:\zab\day42\test"#r""：原始字符串，取消反斜杠 \ 的转义，Windows 路径专用；把目标文件夹路径存入变量 path，也就是我们要操作的文件夹。
names=os.listdir(path)#os.listdir(path)：读取这个文件夹里面所有内容（文件 + 子文件夹），返回一个存放名字的列表；names 接收这个列表。拿到的只有名字，不是完整路径。
for n in names:
    print(n)
length=len(names)#len(names)：求列表长度，也就是文件夹里面一共有多少项；结果存入 length
print(length)
print("\n")
for n in names:  #用循环变量n拿到每一个名称
    full = os.path.join(path,n) #拼接基础路径path和文件名n，生成文件完整绝对路径；自动适配Windows/Linux的斜杠
    if os.path.isfile(full): #判断full是不是一个文件，是文件夹就跳过，不处理文件夹
        result = re.findall(r"\d{8}", n) #正则匹配，在文件名 n 里面，寻找连续 8 个数字；把所有匹配结果放进列表 result
        if(len(result)>0): #判断：如果找到了符合条件的8位数字（列表不为空）
            NewName= result[0] + "_" + n.replace(result[0], "")
            print(n,"->",NewName) #输出原文件名，以及提取出来的那串8位数字；result[0] 取第一个匹配到的八位数


