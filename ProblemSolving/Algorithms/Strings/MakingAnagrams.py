a = input()
b = input()

d = dict()
for i in range(len(a)):
    if a[i] not in d:
        d[a[i]] = 1
    else:
        d[a[i]] += 1

count = int(0)
for i in range(len(b)):
    if b[i] not in d:
        count += 1
    else:
        d[b[i]] -= 1
for i, j in d.items():
    count += abs(j)

print(count)


