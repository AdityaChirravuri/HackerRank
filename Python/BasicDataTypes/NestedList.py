d = {}
for _ in range(int(input())):
    name = input()
    score = float(input())
    d[name] = score

v = d.values()
v = list(set(v))
v.sort()
k = []
lastsec = v[1]
for key, value in d.items():
    if value == lastsec:
        k.append(key)
        
k.sort()
for i  in range(len(k)):
    print(k[i])
#{} means that is a dictonary 
