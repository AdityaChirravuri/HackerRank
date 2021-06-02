d, m, y = map(int, input().split())
dd, dm, dy = map(int, input().split())

if dy == y:
    if dm < m:
        hackos = 500*(m-dm)
    elif dm == m:
        if dd < d:
            hackos = 15*(d-dd)
        else:
            hackos = 0
    else:
        hackos = 0
elif dy > y:
    hackos = 0
else:
    hackos = 10000
print(hackos)