import math
import os
import random
import re
import sys

if __name__ == '__main__':
    N = int(input().strip())
    arr = []
    for N_itr in range(N):
        first_multiple_input = input().rstrip().split()

        firstName = first_multiple_input[0]

        emailID = first_multiple_input[1]
        #print(firstName, emailID)
        if "@gmail.com" in emailID :
            arr.append(firstName)
    arr.sort()
    for i in arr:
        print(i)