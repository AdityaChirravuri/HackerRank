n, m = map(int, input().split())

l = []
for i in range(0, m):
    l.append(list(map(float, input().split())))

for j in zip(*l):
    print(sum(j)/len(j))
