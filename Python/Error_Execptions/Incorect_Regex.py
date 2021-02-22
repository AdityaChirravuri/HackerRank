import re
for _ in range(int(input())):
    s = input()
    try:
        re.compile(s)
        print(True)
    except:
        print(False)

