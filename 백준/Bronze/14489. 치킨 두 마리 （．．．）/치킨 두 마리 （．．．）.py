import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
c=int(input())
if a+b>=c*2:
    print(a+b-2*c)
else:
    print(a+b)