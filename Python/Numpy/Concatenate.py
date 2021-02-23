import numpy as np

n, m ,p = map(int, input().split())

A = np.zeros((n, p), int)
B = np.zeros((m, p), int)

#print(n, m, p)
#print(A)
A = np.array([input().split() for _ in range(n)], int)
B = np.array([input().split() for _ in range(m)], int)
print(A)
print(B)

print(np.concatenate((A, B), axis = 0))
