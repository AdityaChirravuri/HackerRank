#!/bin/python3

import math
import os
import random
import re
import sys

def sol(arr):
    Maxsum = -1000
    for i in range(len(arr)):
        for j in range(len(arr)):
            if i>1 and j>1:
                sum = arr[i][j] + arr[i][j-1] + arr[i][j-2] + arr[i-1][j-1] + arr[i-2][j] + arr[i-2][j-1] + arr[i-2][j-2];
                
                if Maxsum < sum:
                    Maxsum = sum
    return Maxsum

if __name__ == '__main__':
    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))
    print(sol(arr))