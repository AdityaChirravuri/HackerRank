# Enter your code here. Read input from STDIN. Print output to STDOUT

phoneBook = dict()
n = int(input())
for i in range(n):
    name, phone_number = input().split(" ")
    #print(name, phone_number)
    if i not in phoneBook:
        phoneBook[name] = phone_number
    
while True:
    try:
        name = input()
    except EOFError as e:
        break    
    if name in phoneBook:
            print(name+"="+phoneBook[name])
    else:
        print ("Not found")