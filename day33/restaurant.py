class Restaurant:
    def __init__(self,restaurant_name_a,cuisine_type):
        self.restaurant_name=restaurant_name_a
        self.cuisine_type=cuisine_type
    def describe_restaurant(self):
        print(f"Name is {self.restaurant_name}.")
        print(f"Food type is {self.cuisine_type}")
    def open_restaurant(self):
        print("This restaurant is opening.")