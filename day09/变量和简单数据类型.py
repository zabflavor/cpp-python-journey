#练习2-1：将一条消息赋给变量，并将其打印出来
message="hello world"
print(message)
#练习2-2：多条消息，做到变量更新
message="hello python world"
print(message)
#练习2-3：用变量表示一个人的名字，并向其显示一条消息
name="zab"
print(f"Hello {name},would you like to learn some python today?")     #输出的内容为变量时不用加引号
#练习2-4：调整名字大小写
name1="drAco malFoy"
print(name1.title())
print(name1.upper())
print(name1.lower())
#练习2-5：名言
message1='Zab once said,"we should learn to relax."'
print(message1)
#练习2-6：重复2-5，但用变量表示人名
message3="Zab once said"
message2=f"{message3},'we should learn to relax.'"
print(message2)
#练习2-7：提出人名中的空白
name2="     zab\tharry\n\tpotter    "
print(name2)
print(name2.strip())
print(name2.rstrip())
print(name2.lstrip())
# **是乘方运算；python不会打印数字里的下划线；可以同时给多个变量赋值，用逗号分开即可；全体大写为常量
#练习2-8：写加减乘除四行代码，结果都要为8
print(3+5)
print(10-2)
print(2*4)
print(16/2)
#练习2-9：最喜欢的数
number="24"
print(f"my favourite number is {number}")
#注释使用#号表示
#练习2-11：Python之禅
import this
