class User:
    def __init__(self,first_name,last_name):
        self.first_name=first_name
        self.last_name=last_name
    def describe_user(self):
        print(f"User's first_name is {self.first_name}")
        print(f"User's last_name is {self.last_name}")
    def guess_user(self):
        print(f"Hello {self.first_name} {self.last_name},how old are you?")
class Privileges:
    def __init__(self):
        self.privileges1=['can add post']
    def shou_privilege(self):
        print(f"have {self.privileges1} privilege")
class Admin(User):
    def __init__(self,first_name,last_name):
        super().__init__(first_name,last_name)
        self.privileges2=Privileges()
