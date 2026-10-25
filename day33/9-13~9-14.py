#练习9-13：骰子
from random import randint
class Die:
    def __init__(self):
        self.sides=20
    def roll_die(self):
        random_number=randint(1,self.sides)
        print(random_number)
throw=Die()
for i in range(1,11):
    throw.roll_die()
#练习9-14：彩票
from random import choice
array=[2,3,"a",4,8,5,6,"b",7,"c",1,"d",9,"e",10]
for i in range(1,11):
    content=choice(array)
    print(content)

