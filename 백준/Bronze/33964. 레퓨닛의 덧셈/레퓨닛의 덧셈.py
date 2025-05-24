import sys
input=lambda:sys.stdin.readline().rstrip()
x,y=map(int,input().split())
t=0
if x<10:
    t+=int('1'*x)
if y<10:
    t+=int('1'*y)
print(t)