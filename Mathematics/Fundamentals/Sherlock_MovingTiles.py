import math
t, v1, v2 = map(int, input().split())
for _ in range(int(input())):
    a = int(input())
    print (math.sqrt(2)*(t-math.sqrt(a))/abs(v2-v1))
