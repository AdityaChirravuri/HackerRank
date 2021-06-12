string = input()
sub_string = input()

def count_substring(string, sub_string):
    l = len(sub_string)
    k = []
    for i in range(len(string)):
        k.append(string[i:i+l])
    
    return k.count(sub_string)

print(count_substring(string, sub_string))
