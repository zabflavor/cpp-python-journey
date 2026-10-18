#练习8-6：城市名
def city_country(city,country):
    name=f"{city.title()},{country.title()}"
    return name
print(city_country("wuhan","china"))
#练习8-7：专辑
def make_album(ge_ming,zhuan_ji_ming,number=None):
    """返回一个字典，使其输出有关专辑的信息"""
    information={"ge_ming":ge_ming,"zhuan_ji_ming":zhuan_ji_ming}
    if number:
        information["number"]=number     #这里相当于字典里面添加键值对
    return information
print(make_album("A","AAA",43) )
print(make_album("b","c") )
#练习8-8：用户的专辑
while True:
    print("\nPlease tell me your favorite.")
    print("(print q to quit the conservation)")
    ge_ming=input("ge_ming")
    if ge_ming=="q":
        break
    zhuan_ji_ming=input("zhuan_ji_ming")
    full_information=make_album(ge_ming,zhuan_ji_ming)
    print(full_information)