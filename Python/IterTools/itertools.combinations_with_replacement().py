from itertools import combinations_with_replacement

string, n = input().split()
n = int(n)

for i in combinations_with_replacement(sorted(string), n):
    print(''.join(i))
