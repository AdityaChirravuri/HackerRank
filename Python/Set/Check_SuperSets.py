# Enter your code here. Read input from STDIN. Print output to STDOUT
orginal_Set = list(map(int, input().split()))

count = int(0)
n = int(input())
for _ in range(n):
    sub_Set = list(map(int, input().split()))
    if (set(sub_Set).issubset(set(orginal_Set))):
        count += 1
        
print(count == n)
