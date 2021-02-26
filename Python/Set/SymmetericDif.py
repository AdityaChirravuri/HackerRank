n = int(input())
a = set(map(int, input().split()))
m = int(input())
b = set(map(int, input().split()))
d = list(a.union(b).difference(a.intersection(b)))
d.sort()
for i in d:
    print(i)
