n = int(input())
password = input()

count = 0    
if any(i.isdigit() for i in password)==False:
    count+=1
if any(i.islower() for i in password)==False:
    count+=1
if any(i.isupper() for i in password)==False:
    count+=1
if any(i in '!@#$%^&*()-+' for i in password)==False:
    count+=1
print(max(count,6-n))
