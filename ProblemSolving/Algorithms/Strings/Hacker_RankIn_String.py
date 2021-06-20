import re
def method1():
    string = "hackerrank"
    for i in range(int(input())):
        s = input()
        j = int(0)
        a = ""

        if len(string) > len(s):
            print("NO")
            
        else:
            for i in range(len(s)):
                if s[i] == string[j]:
                    j = j+1
                    a = a+s[i]
            #print(a)
            print(a == string)
    


def method2():
    string = "hackerrank"
    for i in range(int(input())):
        s = input()
        print( (re.search('.*'.join("hackerrank"), s) and "YES") or "NO")


if __name__ == '__main__':
    method2()
