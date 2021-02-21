#if __name__ == '__main__':
n = int(input())
arr = map(int, input().split())
arr = list(set(arr))
print(arr)
arr.sort()
print(arr[-2])
