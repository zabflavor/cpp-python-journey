menu={"鱼香肉丝":5,"青椒肉丝":7,"手撕鸡":9,"卤牛肉":9,"炒白菜":3}
acquire="想吃点什么?"
result=[]
while True:
    asks=input(acquire)
    if asks=="结账":
        break
    elif asks not in menu:
        print("抱歉我们没有这道菜")
    else:
        result.append((asks,menu[asks]))
total=0

for name,price in result:
    print(f"账单为{name},这道菜金额为{price}")
    total+=price
print(f"总金额为{total}元")