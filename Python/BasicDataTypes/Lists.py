N = int(input()) 
list1=[] 
for i in range(N): 
    cmd=input().split() 
    command=cmd[0] 
    if len(cmd)>1: index=int(cmd[1]) 
    
    if len(cmd)>2: number=int(cmd[2]) 
    if command=='insert': list1.insert(index,number) 
    if command=='append': list1.append(index) 
    elif command=='remove': list1.remove(index) 
    if command=='print': print(list1) 
    elif command=='pop': list1.pop() 
    elif command=='reverse': list1.reverse() 
    elif command=='sort': list1.sort()
