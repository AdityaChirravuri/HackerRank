# minimum absolute difference
n = int(input())

m = sorted(map(int, input().split()))

#k = set(m)

print(min(abs(x-y) for x, y in zip(m, m[1:])))
