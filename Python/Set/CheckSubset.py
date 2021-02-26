for _ in range(int(input())):
    n = int(input())
    a = set(map(int, input().split()))
    m = int(input())
    b = set(map(int, input().split()))

    print(a.issubset(b))
