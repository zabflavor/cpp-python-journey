#练习5-1：条件测试
#练习5-2：更多的条件测试
name1='zab'
name2='lzh'
print(name1==name2)
print(name1=='Zab')
print(name1.title()=='Zab')
print(3>=2)
print(3>=5)
print(3!=4)
print(3>2 or 3>4)
print(3>1 and 3>2)
print(3>4 and 3>1)
print('zab' in name1)
print('lzh' not in name2)
#练习5-3：外星人颜色
aline_color='yellow'
if 'yellow' in aline_color:
    print('You have 5 points.')
if 'green' in aline_color:
    print('You have 5 points.')
#练习5-4：外星人颜色2
aline_color='green'
if 'green' in aline_color:
    print('You have 5 points because of your shooting.')
else:
    print('You have 10 points.')
aline_color="yellow"
if 'green' in aline_color:
    print('You have 5 points because of your shooting.')
else:
    print('You have 10 points.')
#练习5-5：外星人颜色3
aline_color='green'
if 'green' in aline_color:
    print('\nYou have 5 points.')
elif 'yellow' in aline_color:
    print('You have 10 points.')
else:
    print('You have 15 points.')
aline_color='yellow'
if 'green' in aline_color:
    print('You have 5 points.')
elif 'yellow' in aline_color:
    print('You have 10 points.')
else:
    print('You have 15 points.')
aline_color='red'
if 'green' in aline_color:
    print('You have 5 points.')
elif 'yellow' in aline_color:
    print('You have 10 points.')
else:
    print('You have 15 points.')
#练习5-6：人生的不同阶段
age=17
if age<2:
    print('He is a baby.')
elif age<4:
    print('He is a tot.')
elif age<13:
    print('He is a child.')
elif age<20:
    print('He is a teenager.')
elif age<65:
    print('He is an adult.')
elif age>=65:
    print('He is a senior.')
#练习5-7：喜欢的水果
print('\n-')
favorite_fruits=['apple','banana','orange']
if 'apple' in favorite_fruits:
    print('I really like apples!')
if 'peach' in favorite_fruits:
    print('I really like peaches!')
if 'banana' in favorite_fruits:
    print('I really like bananas!')
if 'orange' in favorite_fruits:
    print('I really like oranges!')
if 'watermelon' in favorite_fruits:
    print('I really like watermelons!')
#练习5-8：以特殊方式跟管理员打招呼
names=['admin','zab','lzh','wxy']
for name in names:
    if name=='admin':
        print('Hello admin,would you like to see a status report')
    if name!='admin':
        print(f'Hello {name},thank you for logging in again.')
#练习5-9：处理没有用户的情形
names=[]
if names:
    for name in names:
        if name=='admin':
            print('Hello admin,would you like to see a status report')
        if name!='admin':
            print(f'Hello {name},thank you for logging in again.')
else:print('We need to find some users.')
#练习5-10：检查用户名
current_users=['Zab','lzh','lzy','wxy','dax',]
new_users=['gyf','zab','lzh','lxc','crt']
for name in current_users:
    if name in new_users:
        print('Please enter another username.')
    if name not in new_users:
        print('This username is available.')
print('\n')
current_lower=[]
for user in current_users:
    current_lower.append(user.lower())
for new_user in new_users:
    if new_user.lower() in current_lower:
        print('You need to change your username')
    else:
        print('You could use this username.')
print('\n')
#练习5-11：序数
numbers=[1,2,3,4,5,6,7,8,9,]
for number in numbers:
    if number==1:
        print(f'{number}st')
    elif number==2:
        print(f'{number}nd')
    elif number==3:
        print(f'{number}rd')
    else:
        print(f'{number}th')
#练习5-12：设置if语句的格式
#在比较运算符两边各添加一个空格
