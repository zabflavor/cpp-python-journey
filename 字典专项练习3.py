students={"小明":[88,92,79],"小红":[95,87,90]}
print(f"小红的成绩为：{students["小红"]}")
print(f"小红的第二门成绩为：{students["小红"][1]}")
print(f"小明的第三门成绩为：{students["小明"][2]}")
sum=0
for k in range(0,3) :
    sum=students["小明"][k]+sum
print(f"小明的总分为：{sum}")
for name,grade in students.items():
    print(f"{name}的第一门分数为：{grade[0]}")
    print(f"{name}的第二门分数为：{grade[1]}")
    print(f"{name}的第三门分数为：{grade[2]}")