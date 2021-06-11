import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(raw_input().strip())
if n%2==1 :
    print("Weird")
else :
    if n>=2 :
        if n<=5 : 
            print("Not Weird")
    if n>=6 :
        if n<=20 : 
            print("Weird")
        else : print("Not Weird")
