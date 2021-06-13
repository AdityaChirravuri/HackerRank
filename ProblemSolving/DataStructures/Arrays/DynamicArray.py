en, m = map(int, input().split())
arr = []

for i in range(n):
    a = []
    arr.append(a)

lastanswer = 0
for i in range(m):
    a, x, y = map(int, input().split())

    if a == 1:
        idx = (x^lastanswer)%n
        arr[idx].append(y)
    elif a == 2:
        idx =(x^lastanswer)%n
        l = y%len(arr[idx])
        lastanswer = arr[idx][l]
        #print("lastanswer:" ,lastanswer)
        print(lastanswer)
    #print(arr, sep = "\n")
        
