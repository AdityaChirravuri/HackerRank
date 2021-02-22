a = int(input())
b = int(input())
print(a + b)
print(a - b)
print(a * b)
s = a/b
print(int(s))
print(float(s))
n = int(input())
t = 1
s = 0
while t != n:
    s = s * 10 + t
    t = t + 1
print(s)