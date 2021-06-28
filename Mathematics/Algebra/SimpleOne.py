M = 1000000007


def power(x, y):
    x %= M
    ans = 1
    while y > 0:
        if y & 1 == 1:
            ans = ans*x % M
        x = x*x % M
        y >>= 1
    return(ans)


def tan(b, n):
    if n == 1:
        return b
    if n % 2 == 0:
        a = tan(b, n//2)
        return(2*a % M*power((1-a**2 % M+M) % M, M-2) % M)
    else:
        a = tan(b, n-1)
        soorat = (a+b) % M
        makhraj = (1-a*b % M+M) % M
        return(soorat*power(makhraj, M-2) % M)


def solve(p, q, n):
    return(tan(p*power(q, M-2) % M, n))


for _ in range(int(input())):
    p, q, n = map(int, input().split())
    print(solve(p, q, n))
