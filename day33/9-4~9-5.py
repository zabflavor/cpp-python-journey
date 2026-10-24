#练习9-4：就餐人数
class Restaurant:
    def __init__(self,restaurant_name_a,cuisine_type):
        self.restaurant_name=restaurant_name_a
        self.cuisine_type=cuisine_type
        self.number_severed=0
    def describe_restaurant(self):
        print(f"Name is {self.restaurant_name}.")
        print(f"Food type is {self.cuisine_type}")
        print(f"{self.number_severed} people had dined in this restaurant.")
    def open_restaurant(self):
        print("This restaurant is opening.")
    def set_number_severed(self,number):
        self.number_severed=number
    def set_number_severed_(self,number):
        self.number_severed+=number

my_restaurant=Restaurant('ZAB',"Chinese food")
my_restaurant.set_number_severed(23)
my_restaurant.describe_restaurant()
my_restaurant.open_restaurant()
my_restaurant.set_number_severed_(30)
my_restaurant.describe_restaurant()
#练习9-5：尝试登陆次数
class User:
    def __init__(self,first_name,last_name,login_attempts):
        self.first_name=first_name
        self.last_name=last_name
        self.login_attempts=login_attempts
    def describe_user(self):
        print(f"User's first_name is {self.first_name}")
        print(f"User's last_name is {self.last_name}")
    def guess_user(self):
        print(f"Hello {self.first_name} {self.last_name},how old are you?")
    def increment_login_attempts(self):
        self.login_attempts+=1
    def reset_login_attempts(self):
        self.login_attempts=0
    def output(self):
        print(f"Number is {self.login_attempts}")
zab=User("zhang","aobo",0)
zab.describe_user()
for i in range(1,8):
    zab.increment_login_attempts()
    zab.output()
zab.reset_login_attempts()
zab.output()