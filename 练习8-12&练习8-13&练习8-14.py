#练习8-12：三明治
def sandwiches(*toppings):
    print("\n让我们来做三明治吧，配料有：")
    for topping in toppings:
        print(f"-{topping}")
sandwiches("鸡肉","生菜","牛肉")
sandwiches("三文鱼")
sandwiches("沙拉")
#练习8-13：用户简介
def build_profile(first,last,**user_info):
    user_info["first_name"]=first
    user_info["last_name"] =last
    return user_info
user_info=build_profile("张","傲博",age=18,location="wuhan")
print(user_info)
#练习8-14：汽车
def car_information(maker,model,**information):
    information["maker"]=maker
    information["model"]=model
    return information
car=car_information("subaru","outback",color="blue",tow_package=True)
print(car)