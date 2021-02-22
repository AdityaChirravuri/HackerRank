from collections import deque

d = deque()
n = int(input())
for _ in range(n):
    str = input().split()

    if str[0] == "append":
        d.append(int(str[1]))
    elif str[0] == "appendleft":
        d.appendleft(int(str[1]))
    elif str[0] == "pop":
        d.pop()
    elif str[0] == "popleft":
        d.popleft()

for i in d:
    print(i, end = " ")
