import re 

n = int(input())
for i in range(n):
    k = input()
    print( bool(re.match(r'^[-+]?[0-9]*\.[0-9]+$', k)))