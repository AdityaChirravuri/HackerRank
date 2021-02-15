def Sum(k):
    l = 0
    for i in range(0, len(k)):
        l = l + ord(k[i])-64

    return l

k =[]
n = int(input())
for _ in range(n):
    l = input()
    k.append(l)

k.sort()

l = int(input())
for _ in range(l):
    f = input()
    if f in k:
        print(Sum(f)*(k.index(f)+1))
    
