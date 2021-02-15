import math as m

def Sum(val):
    num = int(0)
    while val !=0:
        rem = val%10
        num += rem
        val //=10
    return num

t = int(input())

while t != 0:
    n = int(input())
    print(Sum(m.factorial(n)))
    t = t - 1
