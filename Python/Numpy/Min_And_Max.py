import numpy as np

n, m = map(int, input().split())

A = np.array([input().split() for _ in range(n)], int)

B = np.min(A, axis = 1)
print(np.max(B))
