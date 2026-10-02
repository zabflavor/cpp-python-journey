#练习3-1：打姓名，并取出
name=['zab','lzh','zjx','lzy','wxy']
print(name)
print(name[0].title())
print(name[1])
print(name[2])
print(name[-1])
#练习3-2：打出名字加问候语
print(f"hello,{name[0]}")
print(f"hello,{name[1]}")
print(f"hello,{name[2]}")
print(f"hello,{name[-1]}")
#练习3-3：自己的列表
shoes=['nike','adidas','puma']
print(f'i would like to have a {shoes[0].title()} as my birthday gift.')
#练习3-4：嘉宾名单
namelist=['lzh','wxy','lzy']
print(f'Hello {namelist[0]},i would like to invite you to join my party.Do you have free time?')
print(f'Hello {namelist[1]},i would like to invite you to join my party.Do you have free time?')
print(f'Hello {namelist[2]},i would like to invite you to join my party.Do you have free time?')
#练习3-5：修改嘉宾名单
namelist_pop=namelist.pop(0)
print(f'What a pity!{namelist_pop} can not come to the party.')
namelist.insert(2,'dax')
print(f'Hello {namelist[0]},i would like to invite you to join my party.Do you have free time?')
print(f'Hello {namelist[1]},i would like to invite you to join my party.Do you have free time?')
print(f'Hello {namelist[2]},i would like to invite you to join my party.Do you have free time?')
#练习3-6：添加嘉宾
print('Fortunately!I found a bigger dining table.')
namelist.insert(0,'gyf')
namelist.insert(2,'zjx')
namelist.append('cmy')
print(f'Hello {namelist[0]},i would like to invite you to join my party.Do you have free time?')
print(f'Hello {namelist[1]},i would like to invite you to join my party.Do you have free time?')
print(f'Hello {namelist[2]},i would like to invite you to join my party.Do you have free time?')
print(f'Hello {namelist[3]},i would like to invite you to join my party.Do you have free time?')
print(f'Hello {namelist[4]},i would like to invite you to join my party.Do you have free time?')
print(f'Hello {namelist[5]},i would like to invite you to join my party.Do you have free time?')
#练习3-7：缩减名单
print('I can only invite two friends.')
namelist_pop1=namelist.pop(5)  #pop后面用小括号
print(f'Sorry {namelist_pop1},we can have a meet together,next time.')
namelist_pop2=namelist.pop(4)
print(f'Sorry {namelist_pop2},we can have a meet together,next time.')
namelist_pop3=namelist.pop(2)
print(f'Sorry {namelist_pop3},we can have a meet together,next time.')
namelist_pop4=namelist.pop(0)
print(f'Sorry {namelist_pop4},we can have a meet together,next time.')     #表格是实时更新的
print(f'Hello {namelist[0]},you are still in the invited list.')
print(f'Hello {namelist[1]},you are still in the invited list.')
del namelist[1]
del namelist[0]
print(namelist)
#练习3-8： 放眼世界
destination=['changsha','beijing','shanghai','guangdong','shenzhen']
print(destination)
print(sorted(destination))
print(destination)
print(sorted(destination,reverse=True))
print(sorted(destination,reverse=True))
destination.sort()
print(destination)
destination.sort(reverse=True)
print(destination)
#练习3-9：晚餐嘉宾
print(len(destination))
#练习3-10：大杂烩
#练习3-11：有意引发错误 只有四个元素时[4]会报错，但[-1]始终不会错误，当且仅当列表中没有元素时，[-1]才会报错

