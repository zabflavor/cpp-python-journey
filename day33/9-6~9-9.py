#练习9-6： 冰淇淋小店
class Restaurant:
    def __init__(self,restaurant_name_a,cuisine_type):
        self.restaurant_name=restaurant_name_a
        self.cuisine_type=cuisine_type
    def describe_restaurant(self):
        print(f"Name is {self.restaurant_name}.")
        print(f"Food type is {self.cuisine_type}")
    def open_restaurant(self):
        print("This restaurant is opening.")
class IceCreamStand(Restaurant):
    def __init__(self,restaurant_name_a,cuisine_type):
        super().__init__(restaurant_name_a,cuisine_type)
        self.flavors=["草莓","香草","巧克力"]
    def flavor(self):
        print(f"We have the flavors are {self.flavors}")
stand=IceCreamStand("zab","desert")
stand.describe_restaurant()
stand.flavor()
stand.open_restaurant()
#练习9-7：管理员
class User:
    def __init__(self,first_name,last_name):
        self.first_name=first_name
        self.last_name=last_name
    def describe_user(self):
        print(f"User's first_name is {self.first_name}")
        print(f"User's last_name is {self.last_name}")
    def guess_user(self):
        print(f"Hello {self.first_name} {self.last_name},how old are you?")
class Admin(User):
    def __init__(self,first_name,last_name):
        super().__init__(first_name,last_name)
        self.privileges = ['can add post']
    def shou_privilege(self):
        print(f"have {self.privileges} privilege")
admin=Admin("zhang","aobo")
admin.describe_user()
admin.shou_privilege()
#练习9-8：权限
class Privileges:
    def __init__(self):
        self.privileges1=['can add post']
    def shou_privilege(self):
        print(f"have {self.privileges1} privilege")
class Admin(User):
    def __init__(self,first_name,last_name):
        super().__init__(first_name,last_name)
        self.privileges2=Privileges()
admin=Admin("zhang","aobo")
admin.describe_user()
admin.privileges2.shou_privilege()
#练习9-9：电瓶升级
