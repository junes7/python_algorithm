def gcd(x,y):
    if not x%y:
        return y
    else:
        return gcd(y,x%y)

n=int(input())
for i in range(n):
    a,b=map(int,input().split())
    lcm=a*b//gcd(a,b)
    print(lcm)