import sys
input=lambda:sys.stdin.readline().rstrip()
s = list(input())
key = list(input())
for i in range(len(s)):
    if 97 <= ord(s[i]) <= 122:
        s[i] = chr(((ord(s[i]) - ord(key[i%len(key)]) -1) % 26) + 97)
print("".join(s))