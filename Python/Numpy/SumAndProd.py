import numpy as np

n, m = map(int, input().split())
#print(n, m)

A = np.array([input().split() for _ in range(n)], int)
#print(A)

#print(np.sum(A, axis = 0))
B = np.sum(A, axis = 0)
print(np.prod(B, axis = None))
