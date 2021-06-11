# Enter your code here. Read input from STDIN. Print output to STDOUT
import itertools as tp

n = list(map(int, input().strip().split()))
m = list(map(int, input().strip().split()))
k = list(tp.product(n, m))

for i in range(len(k)):
    print(k[i], end=" ")
