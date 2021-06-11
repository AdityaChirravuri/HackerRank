from itertools import groupby

s = input()

for i, n in groupby(s):
    a = list(n);
    print("(", len(a), ",", a[0], ")", end = " ")