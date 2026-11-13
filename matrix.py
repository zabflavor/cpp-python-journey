import numpy as np
A = np.array([[1, 2], [3, 4]])
B = np.array([[5, 6], [7, 8]])
print("A * B =")        # 逐元素乘
print(A * B)
print()
print("A @ B =")        # 矩阵乘法：这才是你手算的答案
print(A @ B)
print("np.dot(A, B) =") # dot 和 @ 是同一个东西的两种写法
print(np.dot(A, B))
print()
print("A.T =")          # 转置：行列互换
print(A.T)
print("A.T.shape =", A.T.shape)