m = 1000000007
_  = int(input())
arr = list(map(int, input().split()))
s = int(1)
for i in range(len(arr)):
    s = s*(1+pow(2, arr[i], m))
s = s-1
print(s)%m
