# Enter your code here. Read input from STDIN. Print output to STDOUT

n = int(input())
sum = int(0)
while n!=0:
    k = int(input())
    sum = sum + k    
    n -= 1

l = str(sum)
print(l)
for i in range(10):
    print(l[i], end = "")
