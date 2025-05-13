import sys
input=lambda:sys.stdin.readline().rstrip()
def gcd(x,y):
    return y if x%y==0 else gcd(y,x%y)
for _ in range(int(input())):
    a,b=map(int,input().split())
    n=gcd(a,b)
    print(a*b//n,n)