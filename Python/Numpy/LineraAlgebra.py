import numpy

n = int(input())

a = numpy.array([input().split() for i in range(n)], float)

#print(a)
print(round(numpy.linalg.det(a), 2))
