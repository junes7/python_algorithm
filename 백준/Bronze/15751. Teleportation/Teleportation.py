import sys
input=lambda:sys.stdin.readline().rstrip()
a,b,x,y=map(int,input().split())
a,b=min(a,b),max(a,b)
x,y=min(x,y),max(x,y)
print(min(b-a,abs(x-a)+abs(y-b)))