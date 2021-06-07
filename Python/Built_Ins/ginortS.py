# Enter your code here. Read input from STDIN. Print output to STDOUT

s = input()

u = l = even = odd = ""
for i in s:
    #print(i)
    if i.isupper():
        u = u+i
    elif i.islower():
        l = l+i

    if i.isdigit():
        if int(i)%2 == 0:
            even = even + i
        else:
            odd = odd + i
k =  sorted(l) + sorted(u) + sorted(odd)+sorted(even)
print("".join(k))
