from collections import Counter
import math 

for _ in range(int(input())):
    s = input()
    count = int(0)
    if len(s)%2 != 0:
        print (-1)
    else:
        a = Counter(s[len(s)//2:]) #second half
        b = Counter(s[:len(s)//2]) #first half
        diff = a-b
        print(sum(diff.values()))
