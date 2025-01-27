import sys
def gcd(x,y):
    return y if x%y==0 else gcd(y,x%y)
a,b=map(int,sys.stdin.readline().split())
print(gcd(a,b),a*b//gcd(a,b),sep="\n")