string = input()
d = {}
for i in string:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1
s = sorted(sorted(d), key = d.get, reverse = True)
for i in s[:3]:
    print(i, d[i])
