num=[3,1,3,2,3,1]
result={}
for k in num:
        result[k]=result.get(k,0) + 1
print(result)