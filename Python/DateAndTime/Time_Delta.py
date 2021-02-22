import datetime
n = int(input())

fmt = '%a %d %b %Y %H:%M:%S %z'
for i in range(n):
    l = input()
    m = input()
    print(int(abs((datetime.datetime.strptime(l, fmt)-datetime.datetime.strptime(m, fmt)).total_seconds())))
    


    
