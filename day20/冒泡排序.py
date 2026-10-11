arr=[2,4,5,3,6,8,7,1]
print("排序前")
for number in arr:
    print(number)
for i in range(1,len(arr)):     #要时刻注意自己的arr[x]下表有没有超标，超标了会报错。如这里自己一开始写的range(1,9)到下面会有arr[8]这就超标了，埋下报错的隐患
    for j in range(0,len(arr)+1-i-1):   #range上标取不到，要时刻反问自己真的算对了上界了吗
        if arr[j] > arr[j + 1]:
           temp = arr[j]
           arr[j] = arr[j + 1]
           arr[j + 1] = temp
        #不用在末尾将j手动复位归零，for循环的每一轮会从range里面取一个新的j
print("排序后")
for number in arr:
    print(number)





