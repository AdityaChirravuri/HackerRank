#the minion game

#enter the string
s = input()

vowel = ["A", "E", "I", "O", "U"]

stuart = int(0)
kevin = int(0)

for i in range(len(s)):
    if s[i] in vowel:
        kevin += len(s)-i
        #print(s[i], "stuart: ", kevin)
    else:
        stuart += len(s)-i
        #print(s[i], "kevin: ", stuart)


if stuart > kevin :
    print("stuart", stuart)
elif stuart < kevin:
    print("kevin", kevin)
else:
    print("draw")
