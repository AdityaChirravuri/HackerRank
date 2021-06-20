s = input()
print(sum(s[i] != "SOS"[i%3] for i in range(len(s))))
