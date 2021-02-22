from itertools import permutations 

string, n = input().split()
n = int(n)

print(*[''.join(i) for i in permutations(sorted(string), n)], sep = "\n")
    


