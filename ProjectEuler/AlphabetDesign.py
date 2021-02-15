import string

alpha = string.ascii_lowercase


n = int(input())

l = []
for i in range(n):
    s = "-".join(alpha[i:n])
    l.append((s[::-1]+s[1:]).center(4*n-3, "-"))

k = len(l)-1
while(k!=0):
    print(l[k])
    k = k -1

for i in range(len(l)):
    print(l[i])
