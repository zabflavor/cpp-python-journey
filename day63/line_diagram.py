import matplotlib.pyplot as plt
from matplotlib import rcParams #字体
rcParams['font.family']='STHeiti'
#创建图表，设置大小(取了一张白纸)
plt.figure(figsize=(10,5))
#要绘图数据
month=['1月','2月','3月','4月']
sales=[100,150,80,130]
#绘制折线图
plt.plot(month,sales,
         label='产品A',
         color='blue',
         linewidth=2,
         marker='o',)
#添加标题
plt.title("2025年销售趋势",color='red',fontsize=20)
#添加坐标轴标签
plt.xlabel('月份',fontsize=10)
plt.ylabel('销售额（万元）',fontsize=10)
#添加图例
plt.legend(loc='upper left')
#添加网格线
plt.grid(True,alpha=0.1,color='blue',linestyle="--")
#只要横着的网格线:plt.grid(axis='x')
#设置刻度字体大小
plt.xticks(rotation=0,fontsize=10)#rotation 旋转角度
#设置y轴范围
plt.ylim(0,160)
#每个数据点上显示数值
for x,y in zip(month,sales):
    plt.text(x,y+1,str(y),ha='center',va='bottom',fontsize=10)
#显示图表
plt.show()