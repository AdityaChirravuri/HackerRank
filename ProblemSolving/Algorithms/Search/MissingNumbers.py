from collections import Counter
n = int(input())
l = list(map(int, input().split()))
m = int(input())
k = list(map(int, input().split()))
s = []
for i in k:
    if i in l:
        l.remove(i)
    else: s.append(i)

s.sort()
for i in s:
    print(i, end = " ")
# another approach

a = Counter(l)
b = Counter(k)

s = sort((a-b).keys)
print(s)
