import sys
input=lambda:sys.stdin.readline().rstrip()
a,b=map(int,input().split())
c,d=map(int,input().split())
print(min(a+d,b+c))