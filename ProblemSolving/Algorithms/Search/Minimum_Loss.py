import itertools
#this may take time of  O(n*n) and an additional space of O(n)
def Naive(arr, n):
    #taking the base case
    if len(arr) > 1:
        min_diff = abs(arr[0] - arr[1])
    else:
        min_diff = 0
    loss = []   #having a list to take care of loss or
    # declare 2 variables for minloss and a loss
    for n1, n2 in itertools.combinations(arr, 2): 
        diff = n2-n1
        #print(diff)
        if diff < 0:
            loss.append(diff)
    return abs(max(loss))

def Algo(year):
    # sort the elements in the list first
    arr = sorted(year)
    # now find the minimum difference between the between the adjacent elements
    MinLoss = 10**10
    for i in range(1, len(arr)):
        if (arr[i] - arr[i-1] < MinLoss) and (year.index(arr[i]) < year.index(arr[i-1])):
            MinLoss = arr[i] - arr[i-1]

    return MinLoss



if __name__ == '__main__':

    n = int(input())
    arr = list(map(int, input().split()))

    #print(Naive(arr, n))
    print(Algo(arr))
