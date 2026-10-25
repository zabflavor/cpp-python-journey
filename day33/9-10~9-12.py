#练习9-10：导入restaurant类
from restaurant import Restaurant
my_restaurant=Restaurant('麦当劳',"西方快餐")
my_restaurant.describe_restaurant()
my_restaurant.open_restaurant()
#练习9-11：导入admin类
import admin
admins=admin.Admin("zhang","aobo")    #调用类之前，要加模块名 如：admin.
admins.describe_user()
admins.privileges2.shou_privilege()
#练习9-12：多个模块
#模块中导入另一个模块即可


