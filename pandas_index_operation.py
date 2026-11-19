import pandas as pd
#读取文件
data=pd.read_csv("/Users/zhangaobo/Desktop/python/stock_day.csv")
#删除某些列
data=data.drop(["ma5","ma10","ma20","v_ma5","v_ma10","v_ma20"], axis=1)
#索引操作
#1、直接用行列索引（先列后行）
print(data["open"]["2018-02-27"])
#2、
#结合loc根据：行索引 和 列名 来获取元素。    data.loc[行索引，列名]
#结合iloc根据：行号 和 列号 来获取元素（从0开始）     data.iloc[行号，列的编号]
print(data.loc['2018-02-27','high'])   #获取一条数据
print(data.loc['2018-02-27':'2018-02-14',['open','high']])  #写的时候注意顺序，不要倒着，冒号包右边
print(data.iloc[0:5,0:2])#冒号不包右边
#赋值操作
data["open"]=23
data.low=1#效果同上，更简单，但是如果列名有空格等，该方式不行。如：df.max value（错）
print(data["open"],data['low'])#直接改变一列的值
#排序操作
data=pd.read_csv("/Users/zhangaobo/Desktop/python/stock_day.csv")
#基于开盘做升序排序
print(data.sort_values(by="open",ascending=True))#index是左侧，values是open及其后面
#基于开盘价格降序排列，价格一样，基于当日（high）降序排列
print(data.sort_values(by=['open','high'],ascending=[False,False]))
#按照索引排序
print(data.sort_index(ascending=False))#默认升序
#演示series对象也有sort_index sort_values 排序方法
print(data.open.sort_index(ascending=True))
#data.open.sort_values(ascending=False) 价格降序

