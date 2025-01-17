import sys
def gcd(x,y):
    return y if x%y==0 else gcd(y,x%y)

n=int(sys.stdin.readline())
for i in range(n):
    a,b=map(int,sys.stdin.readline().split())
    print(a*b//gcd(a,b))