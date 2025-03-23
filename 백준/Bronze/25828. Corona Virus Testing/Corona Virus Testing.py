import sys
input=lambda:sys.stdin.readline().rstrip()
g,p,t=map(int,input().split())
id=g*p
gr=g+p*t
print(0 if id==gr else 1 if id<gr else 2)