#练习9-15：彩票分析
from random import choice
array=[2,3,"a",4,8,5,6,"b",7,"c",1,"d",9,"e",10]
sum=0
win=[choice(array)for i in range(4)]
print("中奖号码：",win)
while True:
    current=[choice(array)for j in range(4)]
    sum+=1
    print(f"第{sum}次尝试：{current}")
    if current==win:
        break
print(f"\n终于抽到一样的了！一共尝试了{sum}次")
#练习9-16：https://pymotw.com/3/#
