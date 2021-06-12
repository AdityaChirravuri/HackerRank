import re

s = input()

k = re.split(r'[,.]', s)
#print(type(k))
for i in k:
    print(i)
