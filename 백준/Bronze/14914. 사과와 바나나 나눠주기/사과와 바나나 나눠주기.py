import sys
input=lambda:sys.stdin.readline().rstrip()
def gcd(x,y):
    return y if x%y==0 else gcd(y,x%y)
a,b=map(int,input().split())
gcdn=gcd(a,b)
for i in range(1,gcdn+1):
    if gcdn%i==0:
        print(i,a//i,b//i)