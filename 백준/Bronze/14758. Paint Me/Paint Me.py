import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    n,w,l,h,a,m=map(int,input().split())
    if n==0: break
    total=w*h*2+h*l*2+w*l
    for _ in range(m):
        x,y=map(int,input().split())
        total-=x*y
    print(total*n//a+(1 if total*n%a!=0 else 0))