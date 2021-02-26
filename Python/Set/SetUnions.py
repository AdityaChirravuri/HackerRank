n = int(input())
s = set(map(int, input().split()))
m = int(input())
p = set(map(int, input().split()))

print(len(s.union(p)))
