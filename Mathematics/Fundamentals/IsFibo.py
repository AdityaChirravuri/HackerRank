#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'isFibo' function below.
#
# The function is expected to return a STRING.
# The function accepts LONG_INTEGER n as parameter.
#
def perfect(k):
    num = int(math.sqrt(k))
    return ((num*num) == k)

def isFibo(n):
    # Write your code here
    if perfect(5*n*n + 4) or perfect(5*n*n-4) :
         return "IsFibo"
    else:
        return "IsNotFibo"
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input().strip())

    for t_itr in range(t):
        n = int(input().strip())

        result = isFibo(n)

        fptr.write(result + '\n')

    fptr.close()
