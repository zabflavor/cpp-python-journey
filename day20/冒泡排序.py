arr=[2,4,5,3,6,8,7,1]
print("排序前")
for number in arr:
    print(number)
for i in range(1,len(arr)):
    for j in range(0,len(arr)+1-i-1):
        if arr[j] > arr[j + 1]:
           temp = arr[j]
           arr[j] = arr[j + 1]
           arr[j + 1] = temp
print("排序后")
for number in arr:
    print(number)





