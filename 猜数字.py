import random
a=random.randint(1,100)
while True:
    x = int(input())
    if x>a:
        print('你猜的数字过大，请重猜')
    elif x<a:
        print('你猜的数字过小，请重猜')
    else:
        print('恭喜你，猜测正确')
        break