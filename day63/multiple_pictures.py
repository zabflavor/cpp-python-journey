import matplotlib.pyplot as plt
month=['1','2','3','4']
sales=[100,150,80,130]
f1=plt.subplot(2,2,1)#生成一个子图 行 列 索引
f1.plot(month,sales)
f2=plt.subplot(2,2,2)
f2.bar(month,sales)
f3=plt.subplot(2,2,3)
f3.scatter(month,sales)
f4=plt.subplot(2,2,4)
f4.barh(month,sales)
plt.show()