import numpy as np

n = int(input())

A = np.array([input().split() for _ in range(n)], int)
B = np.array([input().split() for _ in range(n)], int)

res = np.zeros((n, n), int)
res = np.dot(A, B)

print(res)
