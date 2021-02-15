def Sum(n):
    num = int(0)
    while(n!=0):
        rem = n%10
        num = num + rem
        n //= 10
    return num

t = int(input())
while t!=0:
    n = int(input())
    k = pow(2, n)
    print(Sum(k))
    t-= 1
