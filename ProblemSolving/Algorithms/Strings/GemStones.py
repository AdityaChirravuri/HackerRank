arr =[]
setarr = []
for i in range(int(input())):
    s = input()
    arr.append(s)
    
for i in range(len(arr)):
    setarr.append(set(arr[i]))

a = setarr[0]

for i in setarr[1:]:
    a = a.intersection(i)
    #print(*a)
print(len(a))
