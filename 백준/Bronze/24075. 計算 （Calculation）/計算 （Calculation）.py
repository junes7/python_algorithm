import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
arr=sorted([a+b,a-b],reverse=True)
for c in arr:
    print(c)