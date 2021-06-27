#!/bin/python3

import os
import sys
import math
import cmath

# Complete the solve function below.
def solve(a, b, c):
    d = max(a, b)
    if d >= c and c%math.gcd(a, b) == 0:
        return "YES"
    else:
        return "NO"
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        abc = input().split()

        a = int(abc[0])

        b = int(abc[1])

        c = int(abc[2])

        result = solve(a, b, c)

        fptr.write(result + '\n')

    fptr.close()
