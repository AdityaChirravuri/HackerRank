def count_substring(string, sub_string):
    l = len(sub_string)
    k = []
    for i in range(len(string)):
        k.append(string[i:i+l])
    
    return k.count(sub_string)

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
