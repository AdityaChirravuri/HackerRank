from __future__ import division

def average(array):
    array = set(array)
    s = int(0)
    s = sum(array)/len(array)
    
    return s
    
if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    result = average(arr)
    print result
