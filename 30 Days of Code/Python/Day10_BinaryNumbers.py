n = int(input())
s = bin(n)
s = s[2:]
#print(s)
print(max(s.split('0')).count('1'))
