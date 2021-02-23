import numpy as np

n, m = map(int, input().split())
k = np.zeros((n, m), int)
l = np.zeros((n, m), int)

for i in range(n):
    k[i] = np.array(input().split(), int)

for i in range(n):
    l[i] = np.array(input().split(), int)
    

print(k+l, k-l, k*l, k//l, k%l, k**l, sep = '\n')
