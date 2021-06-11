import numpy as np

np.set_printoptions(sign=' ')

k = np.array(input().strip().split(), float)
print(np.floor(k))
print(np.ceil(k))
print(np.rint(k))
