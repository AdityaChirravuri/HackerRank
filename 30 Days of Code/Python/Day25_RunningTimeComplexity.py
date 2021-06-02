import math as m
for i in range(int(input())):
    num  = int(input())
    
    if num > 1:
        flag = True
        for j in range (2, int (m.sqrt(num))+1):
            if num%j == 0:
                flag = False
                break
        if flag :
            print("Prime")
        else:
            print("Not prime")
    else:
        print("Not prime")
                