import torch
print(torch.__version__)
a = torch.randn(2, 3)
print(a)
print(a.shape)
print(len(a))
print(torch.zeros(3))
print(torch.ones(2, 3))
print(torch.tensor([1, 2, 3]))
print(torch.zeros(3, 1).shape)
b = torch.tensor([1.5, 2.5])
print(b.dtype)
c = torch.tensor([1, 2, 3])
print(c.dtype)
d=torch.randn(2,3)
print(a+a)
print(a.reshape(3, 2))
#shape输出的是维度组建起来的形状，比如2*3的形状
#len是只问第一维有多少
