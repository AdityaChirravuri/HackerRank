s = input()

r = s[::-1]
count = 0
for i in range(len(s)-1):
    if abs(ord(s[i])-ord(s[i+1])) == abs(ord(r[i])-ord(r[i+1])):
        count = count + 1

if count == len(s)-1:
    print("Funny")
else:
    print("Not Funny")
    
