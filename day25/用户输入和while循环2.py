#练习7-6：三种出路 针对练习7-4
admission=("\nPlease write your toppings")
admission+=("\nIf you finish,please input quit.")
active=True
while active:
    toppings=input(admission)
    if toppings=="quit":
        active=False
    else:
        print(f"Ok,we will add {toppings} in the pizza.")
#练习7-7：无限循环 pass掉了
#练习7-8：熟食店
sandwich_orders=["blt","panini","ham","chicken"]
finished_sandwiches=[]
while sandwich_orders:
    current_sandwich=sandwich_orders.pop()
    print(f"I made your {current_sandwich} sandwich.")
    finished_sandwiches.append(current_sandwich)
print(f'We have made {finished_sandwiches} sandwiches.')
#练习7-9：五香烟熏牛肉卖完了
sandwich_orders=["blt",'pastrami',"panini",'pastrami',"ham","chicken",'pastrami']
print("\n Pastrami is sold out. ")
while 'pastrami' in sandwich_orders:
    sandwich_orders.remove("pastrami")
print(f'We still have {finished_sandwiches} sandwiches.')
#练习7-10：
attractions=[]
message="If you could visit one place in the world,where would you go?"
message+="\nIf you finish,please input quit."
while True:
    attraction = input(message)
    if attraction=="quit":
        break
    else:
        attractions.append(attraction)
print(f"Dream attractions involve {attractions}.")





