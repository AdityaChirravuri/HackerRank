# Enter your code here. Read input from STDIN. Print output to STDOUT

import collections 

l = {}
n = int(input())

for _ in range(0, n):
    string, space, k = input().rpartition(' ')
    k = int(k)
    if string in l:
        l[string] += k
    else: l[string] = k
    
for i, j in l.items():
    print(i, j)
