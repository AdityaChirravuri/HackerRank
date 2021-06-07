from collections import OrderedDict

n = int(input())
d = OrderedDict()
for _ in range(n):
    s = input()
    if s in d:
        d[s] += 1
    else:
        d[s] = 1

print(len(d))
for i, j in d.items():
    print(j, end = " ")
