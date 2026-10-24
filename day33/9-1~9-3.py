#练习9-1：餐馆
class Restaurant:
    def __init__(self,restaurant_name_a,cuisine_type):
        self.restaurant_name=restaurant_name_a
        self.cuisine_type=cuisine_type
    def describe_restaurant(self):
        print(f"Name is {self.restaurant_name}.")
        print(f"Food type is {self.cuisine_type}")
    def open_restaurant(self):
        print("This restaurant is opening.")
my_restaurant=Restaurant('ZAB',"Chinese food")
my_restaurant.describe_restaurant()
my_restaurant.open_restaurant()
#练习9-2：三家餐馆
#练习9-3：用户
class User:
    def __init__(self,first_name,last_name):
        self.first_name=first_name
        self.last_name=last_name
    def describe_user(self):
        print(f"User's first_name is {self.first_name}")
        print(f"User's last_name is {self.last_name}")
    def guess_user(self):
        print(f"Hello {self.first_name} {self.last_name},how old are you?")
zab=User("zhang","aobo")
zab.describe_user()
zab.guess_user()
