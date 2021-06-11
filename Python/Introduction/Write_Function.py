def is_leap(year):
    leap = False
    
    # Write your logic here
    if year%4 == 0 and year%100 != 0 or year%400 == 0:
        leap = True
    elif year%100 == 0:
        leap = False
        
    else :leap = False
    
    return leap

