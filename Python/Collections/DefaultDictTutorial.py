from collections import defaultdict

d = defaultdict(list)
n, m = map(int, input().split())


for i in range(1, n+1):
    k = input()
    d[k].append(i)

for i in range(0, m+1):
    k = input()
    if k in d:
        for j in d[k]:
            print(j, end = " ")
        print()
    else: print(-1)
