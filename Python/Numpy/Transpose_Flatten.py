import numpy as np
n, m = map(int, input().split())

l = np.zeros((n, m), int)

for i in range(n):
    l[i] = np.array(input().split(), int)

print(l.transpose())
print(l.flatten())
