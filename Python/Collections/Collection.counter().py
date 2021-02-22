import collections as cmp


n = int(input())
l = list(map(int, input().strip().split()))
#print(cmp.Counter(l))

cost = int(0)
m = int(input())
while(m != 0):
    a, b = map(int, input().split())

    if(a in l):
        l.remove(a)
        cost += b
    m = m - 1

print(cost)


