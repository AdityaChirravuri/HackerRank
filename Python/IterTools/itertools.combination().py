from itertools import combinations

string, n = input().split()
n = int(n)

for j in range(1, n+1):
    for i in combinations(sorted(string), j):
        print(''.join(i))
