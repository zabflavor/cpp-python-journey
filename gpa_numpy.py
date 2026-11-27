import numpy as np
data=np.loadtxt("scores.txt",dtype=str)
names=np.array(data[:,0])
scores=np.array(data[:,1]).astype(float)
credits=np.array(data[:,2]).astype(float)
points = np.zeros_like(scores)
points[scores >= 90] = 4.0
points[(scores >= 85) & (scores < 90)] = 3.7
points[(scores >= 82) & (scores < 85)] = 3.3
points[(scores >= 78) & (scores < 82)] = 3.0
points[(scores >= 75) & (scores < 78)] = 2.7
points[(scores >= 72) & (scores < 75)] = 2.3
points[(scores >= 68) & (scores < 72)] = 2.0
points[(scores >= 64) & (scores < 68)] = 1.5
points[(scores >= 60) & (scores < 64)] = 1.0
gpa=(points*credits).sum()/credits.sum()
with open("numpy_result.txt", "w", encoding="utf-8") as out:
    # 表头
    out.write(f"{'课程':<12} {'分数':>4} {'绩点':>4} {'学分':>4}\n")
    # 六行数据
    for i in range(len(names)):
        out.write(f"{names[i]:<12} {scores[i]:>4.0f} {points[i]:>4.1f} {credits[i]:>4.1f}\n")
    # GPA 那行
    out.write(f"GPA = {gpa}\n")
# 抽查：for 一行行算 vs 广播整块算，本质区别？
# for：我写循环，每次只拿一个分数去判断、去乘学分，循环 6 次才算完，脑子跟着下标走。
# 广播：我不写循环，把条件（scores>=90 等）和整个数组对齐，底层一次性给 6 个位置同时赋值 / 相乘。
# 本质区别：谁来循环、一次处理多少——for 是外层 Python 循环一次一个，广播是底层 C 循环一次一整块。
# 数学没变（还是分数→绩点、绩点×学分求和÷总学分），变的只是"计算的组织方式"。



