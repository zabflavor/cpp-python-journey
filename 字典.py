#练习6-1：人
information={'first_name':'zhang','last_name':'aobo','age':'18','city':'武汉'}
print(information['first_name'])
#练习6-2：喜欢的数
num={
    'zab':1,
    'wxy':2,
    'lzy':3,
    'zjx':4,
    'dax':5,
}
print(f"zab's favorite number is {num["zab"]}")
#练习6-3：词汇表
vocabulary={"print":"打印",'int':"定义变量",'sum':'求和时常用的变量'}
print(f"print is {vocabulary["print"]}")
#练习6-4：词汇表2
vocabulary={"print":"打印",'int':"定义变量",'sum':'求和时常用的变量'}
for name,function in vocabulary.items():
    print(f"{name}的作用是{function}")
#练习6-5：河流
rivers={'nile':'egypt','chang jiang':'china','huang river':'china'}
for river,nation in rivers.items():
    print(f"The {river.title()} runs through {nation.title()} ")
print('\n')
for rivername in rivers.keys():
    print(rivername.title())
for nationname in rivers.values():
    print(nationname.title())
#练习6-6：调查
favorite_language={'zab':'c','wxy':'python','lzy':'java','zjx':'ruby'}
namelist=['zab','zjx']
for names in favorite_language.keys():
    #不要用list，list是一个关键词  后缀不要是.items()，不然names是（名字，语言）打包在一起的元组，元组不能调用.title()
    if names in namelist:
        print(f'{names.title()},thanks for you assistance.')
    elif names not in namelist:
        print(f'Hi {names.title()},we hope you can help us.')
#练习6-7：人们
information1={'first_name':'张','last_name':'傲博','age':'18','city':'武汉'}
information2={'first_name':'王','last_name':'玺毓','age':'18','city':'上海'}
information3={'first_name':'郑','last_name':'迦心','age':'18','city':'武汉'}
informations=[information1,information2,information3]
for information in informations:
    print(information)
#练习6-8：宠物
pet1={'dog':'zab'}
pet2={'cat':'zjx'}
pet3={'pig':'wxy',}
pet4={'fish':'lzy'}
pets=[pet1,pet2,pet3,pet4]
for pet in pets:
    print(pet)
#练习6-9：喜欢的地方
favorite_places={'zab':['武汉','上海','北京'],'gyf':['武汉','湖南'],'lyz':['青岛']}
for name,destinations in favorite_places.items():
    print(f"\nName={name}")
    for destination in destinations:
        print(f"-{destination}")
#练习6-10：喜欢的数2
favorite_numbers = {
    '张伟': [7, 42],
    '李娜': [3, 14, 159],
    '王强': [8],
}
for names,numbers1 in favorite_numbers.items():
    print(f"{names}最喜欢的数字为")
    for number in numbers1:
        print(number)

#练习6-11：城市
content={'武汉':{'country':'中国','population':'人数不知道','attraction':'热干面'},
         '上海':{'country':'中国','population':'人蛮多','attraction':'东方明珠'},
         '北京':{'country':'中国','population':'人更多','attraction':'天安门'}}
for cities,details in content.items():
    print(f"{cities}")
    population=f"{details['population']}"
    country=f'{details['country']}'
    attraction=f"{details['attraction']}"
    print(f"\t人数：{population}")
    print(f"\t国家：{country}")
    print(f"\t特色：{attraction}")
#练习6-12：扩展
