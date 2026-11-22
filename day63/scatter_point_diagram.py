import matplotlib.pyplot as plt
from matplotlib import rcParams #字体
import random
rcParams['font.family']='STHeiti'
#创建图表，设置大小(取了一张白纸)
plt.figure(figsize=(10,5))
#要绘图数据
x=[]
y=[]
for i in range(1000):
    temp=random.uniform(0,10)
    x.append(temp)
    y.append(2*temp+random.gauss(0,2))
#绘制散点图
plt.scatter(x,y,
         alpha=0.5,
         color='blue',
         s=20,
         label='数据')
#添加标题
plt.title("x与y的关系",color='red',fontsize=20)
#添加坐标轴标签
plt.xlabel('x自变量',fontsize=10)
plt.ylabel('y因变量',fontsize=10)
#添加图例
plt.legend(loc='upper left')
#添加网格线
plt.grid(True,alpha=0.1,color='blue',linestyle="--")
#只要横着的网格线:plt.grid(axis='x')
#设置刻度字体大小
plt.xticks(rotation=0,fontsize=10)#rotation 旋转角度
#设置y轴范围
plt.ylim(0,30)
plt.plot([0,10],[0,20],color='orange',linestyle="--",linewidth=2)
#显示图表
plt.show()