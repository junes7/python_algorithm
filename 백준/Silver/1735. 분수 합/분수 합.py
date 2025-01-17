import sys
num=[]
def gcd(x,y):
    return y if x%y==0 else gcd(y,x%y)
for i in range(2):
    num+=[list(map(int,sys.stdin.readline().split()))]
numer=num[0][0]*num[1][1]+num[0][1]*num[1][0]
denom=num[0][1]*num[1][1]
print(numer//gcd(numer,denom), denom//gcd(numer,denom))