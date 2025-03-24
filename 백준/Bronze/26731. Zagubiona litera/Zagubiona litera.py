import sys
input=lambda:sys.stdin.readline().rstrip()
alpha=input()
for i in range(26):
    if chr(65+i) not in alpha:
        print(chr(65+i))
        break