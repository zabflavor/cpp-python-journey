#练习7-1：汽车租赁
message=input("What kind of car do you want to rent?")
print(f"Let me see if I can find you a {message}")
#练习7-2：餐厅定位
number=input("How many people are dining in total?")
number=int(number)
if number>8:
    print("Sorry,we don't have available table.")
else:
    print("Congratulations!We have available table.")
#练习7-3：10的整数倍
num=input("Please input a number.")
num=int(num)
if num%10==0:
    print("This number is an integer multiple of ten.")
else:
    print("This number isn't an integer multiple of ten.")
#练习7-4：披萨配料
admission=("\nPlease write your toppings")
admission+=("\nIf you finish,please input quit.")
while True:
    toppings=input(admission)
    if toppings=="quit":
        break
    else:
        print(f"Ok,we will add {toppings} in the pizza.")
#练习7-5：电影票
message=("Please input your age.")
while True:
    age=int(input(message))
    if age<3:
        print("You are free.")
    elif age<=12 and age>=3:
        print("Your fee is 10 dollars.")
    else:
        print("Your fee is 15 dollars.")
