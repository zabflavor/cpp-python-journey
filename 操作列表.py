#练习4-1：披萨
pizzas=['bsk','dml','mglt']
for pizza in pizzas:
    print(f'I like {pizza} pizza.')
print('I really like pizza!')
#练习4-2：动物
animals=['dog','cat','bird']
for animal in animals:
    print(f"A {animal} would make a great pet.")
print('Any of these animals would make a great pet!')
#练习4-3：数到20
for number in range(1,21):
    print(number)
#练习4-4：一百万
numbers=list(range(1,1000001))
print(numbers)
#练习4-5：一百万求和
print(min(numbers))
print(max(numbers))
print(sum(numbers))
#练习4-6：
uneven=list(range(1,20,2))
print(uneven)
#练习4-7：3的倍数
multiples_of_3=list(range(3,31,3))
for m in multiples_of_3:
    print(m)

