import numpy as np
a=np.array([1,2.5,3])
print(a)  #numpy输出没有逗号
print(a.dtype) #dtype输出类型(小数整数混合会全组提升到float)
print(np.zeros(5))  #都带.说明是小数，都默认是float
print(np.ones(3))   #数组打印时带点 = 浮点，纯数字 = 整数
print(np.arange(1, 10, 2))
print(np.arange(0, 1, 0.25))
print(np.linspace(0, 1, 5))
b=np.array([1,2,3,4])
print(b+10)  #没写for也导致每个都变了
print(b*3)
print(np.array([1,2])+np.array([10,20]))   #（数学加法，长度不变）
c=np.array([[1,2,3,],[4,5,6]])
print(c)
print(c.shape)    #规模
print(c.size)     #个数
print(c.ndim)     #第一维
c = np.arange(1, 7)
print("\nc =", c)
print("c.size =", c.size)    #先记住总数
d = c.reshape(3, 2)          #维数重置
print("d =")
print(d)
print("d.shape =", d.shape)
e = c.reshape(6, -1)          # -1 表示"这一维你替我算"，跟你 MNIST 注释里写过的一样
print("e.shape =", e.shape)
x = np.arange(4)
print("\nx =", x, "| dtype =", x.dtype)
y = x / 2
print("x / 2 =", y, "| dtype =", y.dtype)   # 看：类型变了没有？点号出现了吗？
z = x // 2
print("x // 2 =", z, "| dtype =", z.dtype)  # 对照：整除又是哪种
a = np.array([1, 2, 3, 4])
print("\na + 10 =", a + 10)                      # 一个数配整个数组
print("a + np.array([10, 20, 30, 40]) =",
      a + np.array([10, 20, 30, 40]))            # 两个数组对应位置相加
print(a + np.array([10, 20,30,40]))            # 这行先别跑，猜猜会怎样？

