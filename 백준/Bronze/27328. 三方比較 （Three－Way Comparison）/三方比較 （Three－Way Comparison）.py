import sys
input=lambda:sys.stdin.readline().rstrip()
a=int(input())
b=int(input())
if a==b:
    print(0)
else:
    print(-1 if a<b else 1)