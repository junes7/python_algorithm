import sys
input=lambda:sys.stdin.readline().rstrip()
def gcd(x,y):
    return y if x%y==0 else gcd(y,x%y)
a,b=map(int,input().split(':'))
gcdn=gcd(a,b)
print(a//gcdn,':',b//gcdn,sep='')