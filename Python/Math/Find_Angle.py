import math

ab = float(input())
bc = float(input())

#d = str(math.ceil(math.degrees(math.atan(ab/bc))))
print(str(int(round(math.degrees(math.atan(ab/bc)),0)))+'°')
#print(d + '°')
