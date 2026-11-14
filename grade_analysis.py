import numpy as np
grade=np.random.randint(0, 101, size=(50, 6))
print(grade.shape)
print(grade.mean(axis=1))
print(grade.max(axis=0))
print(grade.mean(axis=0))
w=np.array([1.3,2.0,1.5,1.8,1.3,1.1])
grade_all=grade@w
print(grade_all)
rank=np.argsort(-grade_all)
print(grade_all[rank])
m=grade>=60
print(m.sum(axis=1))
print(m.all(axis=1).max())
print(m.all(axis=1).sum())
print(grade[0],grade_all[0])