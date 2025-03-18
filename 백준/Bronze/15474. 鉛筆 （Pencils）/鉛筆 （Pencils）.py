import sys
input=lambda:sys.stdin.readline().rstrip()
n,a,b,c,d=map(int,input().split())
r1=(n//a+(0 if n%a==0 else 1))*b
r2=(n//c+(0 if n%c==0 else 1))*d
print(r1 if r1<r2 else r2)