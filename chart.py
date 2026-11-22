import matplotlib.pyplot as plt
import pandas as pd
from matplotlib import rcParams #字体
rcParams['font.family']='STHeiti'
df=pd.read_csv("students.csv")
df['总分']=df['语文']+df['数学']+df['英语']
f1=plt.subplot(2,2,1)
f1.bar(df["姓名"],df['总分'])
plt.xticks(rotation=0,fontsize=7)
f2=plt.subplot(2,2,2)
f2.plot(df['姓名'],df['语文'],
         label='语文',
         color='blue',
         linewidth=2,
         marker='o',)
f2.plot(df['姓名'],df['数学'],
         label='数学',
         color='red',
         linewidth=2,
         marker='o',)
f2.plot(df['姓名'],df['英语'],
         label='英语',
         color='yellow',
         linewidth=2,
         marker='o',)
plt.xticks(rotation=0,fontsize=7)
plt.legend(loc='upper left')
f3=plt.subplot(2,2,3)
f3.scatter(df['语文'],df['数学'])
plt.tight_layout()
plt.savefig("chart.png")
plt.show()
