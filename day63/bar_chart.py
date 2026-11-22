import matplotlib.pyplot as plt
from matplotlib import rcParams #字体
rcParams['font.family']='STHeiti'
#创建图表，设置大小(取了一张白纸)
plt.figure(figsize=(10,5))
subjects=['语文','数学','英语','科学']
scores=[85,92,78,88]
#绘制柱状图
plt.bar(subjects,scores,label='小红')#横过来的就用barh
plt.title('2025年成绩分布',color='red',fontsize=20)
plt.xlabel('科目',fontsize=10)
plt.ylabel('分数',fontsize=10)
plt.legend(loc='upper left')
plt.grid(axis='y',alpha=0.1,linestyle='--',color='blue')
plt.xticks(rotation=0,fontsize=12)
plt.yticks(rotation=0,fontsize=12)
plt.ylim(0,100)
for x,y in zip(subjects,scores):
    plt.text(x,y+1,str(y),ha='center',va='bottom',fontsize=10)
#自动优化排版
plt.tight_layout()
#显示图表
plt.show()