import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
c,d=map(int,input().split())
r=(a+b-1)%4
r=(r+c+d-1)%4
print(r+1)