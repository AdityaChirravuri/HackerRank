res = []
def print_formatted(number):
    # your code goes here
    for i in range(1, number+1):
        b = str(bin(i))
        o = str(oct(i))
        h = str(hex(i)).upper()
        res.append([str(i), o[2:], h[2:], b[2:]])

    width = len(res[-1][3])


    for i in res:
        print(*(rep.rjust(width) for rep in i))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
