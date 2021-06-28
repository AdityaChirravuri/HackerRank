import math
def solve(n):
    
    v = int(math.sqrt(1+8*n))
    if ((v*v) == (1+8*n)) == True:
        k1 = int((-1+v)/2)
        k2 = int((-1-v)/2)
        
        if k1>0 :
            return "Go On bob " + str(k1)
        
        elif  k2 >0:
            return "Go Pn bob" + str(k2)
    else:
        return "Better Luck Next Time"

if __name__ == '__main__':
    t = int(input())

    for i in range(t):
        n = int(input())
        print(solve(n))
