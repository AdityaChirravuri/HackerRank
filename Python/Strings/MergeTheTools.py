st = input()
k = int(input())
arr =[]
i = int(0)
while i <= len(st)-k:
    arr.append(st[i:i+k])
    i += k
print(arr)

for i in arr:
    p = []
    for j in i:
      if j not in p:
          p.append(j)
    for k in p:
        print(k, end = "")
    print()
    
