import sys
input=lambda:sys.stdin.readline().rstrip()
s=input()
print(2 if s==")1(" else 0 if s=="(1)" else 1)