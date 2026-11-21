import pandas as pd
#1、读进来
df=pd.read_csv("/Users/zhangaobo/Desktop/python/pandas/students.csv")
print(df.head(5))
print(df.shape)
#2、加工
df["等级"]='B'
df.loc[df['语文']>=80,'等级']='A'
df['及格门数'] = (df['语文']>=60).astype(int) + (df['数学']>=60).astype(int) + (df['英语']>=60).astype(int)
#astype(int) 是把 True/False 明确转成 1/0
print(df)
#3、统计
df['总分']=df['语文']+df['数学']+df['英语']
print(df["语文"].mean())
print(((df['语文']>=60)&(df["数学"]>=60)&(df['英语']>=60)).sum())
print(df.groupby('等级')["总分"].mean())
#4、排序出结论
print(df.sort_values('总分',ascending=False).head(3))
#5、一句话结论
print(f'总分第一是{df.sort_values('总分',ascending=False).head(1)['姓名'].iloc[0]}')
# 抽查题：布尔筛子 df[df["语文"]>85] 是"按行筛"——逐个学生判断，条件成立留这一行；
# filter(lambda x: ...) 是"按组筛"——先把人分成组，算整组的统计量（如组平均），
# 达标就留整组（一组里所有人全留），不达标整组删掉。
# 差别在粒度：一个以"行/个人"为单位，一个以"组"为单位。
