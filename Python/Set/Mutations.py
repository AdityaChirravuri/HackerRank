n = int(input())
s = set(map(int, input().split()))
m = int(input())

for _ in range(m):
    str = input().split()
    p = set(map(int, input().split()))
    if str[0] == "intersection_update":
        s.intersection_update(p)

    elif str[0] == "update":
        s.update(p)

    elif str[0] == "symmetric_difference_update":
        s.symmetric_difference_update(p)

    elif str[0] == "difference_update":
        s.difference_update(p)

print(sum(s))

