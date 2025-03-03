import sys
input=lambda:sys.stdin.readline().rstrip()
a=input()
b=input()
print("no" if len(a)<len(b) else "go")