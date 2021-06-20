s = input().lower()
a = set()
l =[]
for i in s:
    a.add(i)
l = list(a)
l.sort()
k = len(l)
if l[0] == ' ':
    k = k-1

if k == 26:
    print("panagram")
else: print("not panagram")
