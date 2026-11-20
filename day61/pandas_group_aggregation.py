import pandas as pd
df=pd.read_csv("/Users/zhangaobo/Desktop/python/pandas/uniqlo.csv")
#groupby()分组聚合 以及 分组过滤
#分组聚合
#格式：df.groupby(['分组字段1','分组字段2'...]).agg({'列名1':'聚合函数名','列名2':'聚合函数名'})
#1、按照单列分组
print(df.groupby(['city']))#返回的是dataframe分组对象（只是准备按城市分组，具体分组功能看agg括号里面的内容）。如果分组列只有一个，中括号可以不写
#2、获取某个分组的数据
print(df.groupby(["city",'channel']).get_group(('北京','线下')))#分组值要写成一个元组
#3、分组加聚合
print(df.groupby(['city','channel']).agg({'revenue':'sum'}))
print(df.groupby(['city','channel']).agg({'revenue':'mean','unit_cost':'sum'}))
#4、查看列名
print(df.columns)
print("\n")
#分组过滤
#1、按照城市分组，查询每组销售金额平均值，大于200的全部数据
print(df.groupby('city').agg({"revenue":'mean'}))
#完成需求
print(df.groupby('city').filter(lambda x:x.revenue.mean()>200))
#filter(lambda x: x.revenue.mean() > 200) 就是：每个城市作为一个小组 x，先算该组平均销售额；大于 200 就保留整组数据，否则删除整组数据。
print(df.groupby('city').revenue.filter(lambda x:x.mean()>200))
#只能看到revenue这一项数据，因为一开始取的就是revenue
