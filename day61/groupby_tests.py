import pandas as pd
data=pd.read_csv('/Users/zhangaobo/Desktop/python/pandas/students.csv')
data['等级']='B'
data.loc[data['语文']>=80,"等级"]="A"
#data['语文']>=80算出来的是一串布尔值，把满足分数的地方判断为true
g=data.groupby('等级')
print(g)
print(type(g))
print(data.groupby("等级")["数学"].mean())
print(data.groupby("等级")[["语文","数学","英语"]].mean())
#df[列表] 才是 pandas 的“取多列”语法，["数学", "语文"] 是列表
print(data.groupby("等级").size())
#数这一组里有几行（几个人）。它只管行数，一行就是一行，哪怕这行里全是空格子也算一个。结果是一列数字，每个组一个值。
print(data.groupby("等级").count())
#数这一组里每一列有几个非空格子。它要逐列去数，所以结果是一张表：原来有几列，它就出几列，每列各报一个数。
#上面两个都是先分组再数
data['总分']=data['语文']+data['数学']+data['英语']
avg=data.groupby("等级")['总分'].mean()
print(avg.sort_values(ascending=False))
#这里不再需要by=了，因为这里avg是一个series了
print(data[data["等级"]=="A"])
data2=data[data['等级']=="A"]
print(data2.groupby('等级')['总分'].mean())
# 第 7 题 · groupby 之后结果形状的两个变化：
# 1. 行索引变了：从 0,1,2...（每个人）变成 A、B（每个组）——组名当了新的行索引
# 2. 数据粒度变了：从"每个人一行"变成"每组一行"——10 个学生压成 A、B 两行，每行是这一组的统计结果
# 一句话：groupby 就是把"人"压缩成"组"，然后用组名重新编号


