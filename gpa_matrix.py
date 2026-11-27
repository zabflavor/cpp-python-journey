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
p = points.reshape(1, -1)        # 1 行 6 列：绩点行向量
c = credits.reshape(-1, 1)       # 6 行 1 列：学分列向量
result = p @ c                   # 1×6 乘 6×1 → 1×1，得到 [[58.2]]
gpa=(result[0,0]/credits.sum())
with open("numpy_matrix.txt", "w", encoding="utf-8") as out:
    # 表头
    out.write(f"{'课程':<12} {'分数':>4} {'绩点':>4} {'学分':>4}\n")
    # 六行数据
    for i in range(len(names)):
        out.write(f"{names[i]:<12} {scores[i]:>4.0f} {points[i]:>4.1f} {credits[i]:>4.1f}\n")
    # GPA 那行
    out.write(f"GPA = {gpa}\n")