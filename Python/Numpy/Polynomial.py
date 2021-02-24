import numpy

l = numpy.array(input().split(), float)
v = float(input())
print(round(numpy.polyval(l, v), 2))

