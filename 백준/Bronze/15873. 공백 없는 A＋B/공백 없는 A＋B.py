import sys
s=sys.stdin.readline().rstrip()
print(int(s[:2])+int(s[2:]) if s[1]=='0' else int(s[:1])+int(s[1:]))