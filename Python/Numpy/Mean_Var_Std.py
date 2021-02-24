import numpy

n, m = map(int, input().split())
k = numpy.zeros((n, m), float)

for i in range(n):
    k[i] = numpy.array(input().split(), float)


print(numpy.mean(k, axis = 1))
print(numpy.var(k, axis = 0))

std  = numpy.std(k, axis = None)
print(numpy.around(std, 11))
