# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import deque

def sol(arr):
    pile = float('inf')
    while arr:
    #num = arr.pop()
        num =  arr.pop(0) if arr[0] > arr[-1] else arr.pop(-1)
        
        if num > pile:
            return "No"
        
        pile = num
    return "Yes"
    

for _ in range(int(input())):
    n = int(input())
    #arr = deque(list(map(int, input().split())))
    arr = list(map(int, input().split()))
    print(sol(arr))
    
