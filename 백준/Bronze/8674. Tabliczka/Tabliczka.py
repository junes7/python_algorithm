import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
if a%2==1 and b%2==1:
    print(min(a,b))
else:
    print(0)