#练习4-8：立方
numbers=[]
for number in range(1,11):
    numbers.append(number**2)
print(numbers)
#练习4-9：立方解析
cube=[num**2 for num in range(1,11)]
print(cube)
#练习4-10：切片
foods=['a','b','c','d','e','f','g']
print('The first three items in the list are:')
print(foods[0:3])
print('Three items from the middle of the list are:')
print(foods[2:5])
print('The last three items im the list are:')
print(foods[-3:])
#练习4-11：你的披萨，我的披萨
friends_pizzas=['bsk','mglt','dml','bg']
friends_pizza=friends_pizzas[:]
friends_pizzas.append('kfc')
friends_pizza.append('mdl')
print('My favorite pizzas are:')
print(friends_pizzas)
print("My friend's favorite pizzas are:")
for pizza in friends_pizza:
    print(pizza)
#练习4-12：使用多个循环
#上面的就是用for循环写的
#练习4-13：自助餐
buffet=('ice cream','cake','beef','bacon','juice')
for food in buffet:
    print(food)
print('\n')
buffet=('ice cream','cake','pig','tofu','juice')
for food in buffet:
    print(food)
#练习4-14：访问 PEP 8
#练习4-15：代码审核
