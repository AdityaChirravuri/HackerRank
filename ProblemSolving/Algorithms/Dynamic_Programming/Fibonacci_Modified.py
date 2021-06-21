l = list(map(int, input().split()))

arr = [];
arr.append(l[0])
arr.append(l[1])

for i in range(2, l[2]+1):
    temp = arr[i-2] + arr[i-1]*arr[i-1]
    arr.append(temp)
    
print(arr[l[2]-1])