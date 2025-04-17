import sys
input=lambda:sys.stdin.readline().rstrip()
w,h=map(int,input().split())
n,a,b=map(int,input().split())
rlt=(w//a)*(h//b)
if w<a or h<b:
     print(-1)
else:
     print(int(n//rlt)+(1 if n%rlt!=0 else 0))