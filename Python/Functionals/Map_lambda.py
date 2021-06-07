cube = lambda x: pow(x, 3)# complete the lambda function 

def fibonacci(n):
    # return a list of fibonacci numbers
    #cube = lambda x: pow(x,3)# complete the lambda function 
    
    lis = [0, 1]
    for i in range(2, n):
        lis.append(lis[i-1]+lis[i-2])

    return lis[0:n]


if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))
