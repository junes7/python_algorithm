import sys
mii=lambda:map(int,sys.stdin.readline().rstrip().split())
n,b=mii()
a=[list(mii()) for _ in range(n)]
def multi(a,b):
    m=[[0]*n for _ in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                m[i][j]+=a[i][k]*b[k][j] % 1000
    return m
def square(x,n):
    if n==1:
        return x
    temp=square(x,n//2)
    return multi(temp,temp) if not n%2 else multi(multi(temp,temp),x)
r=square(a,b)
for i in range(n):
    for j in range(n):
        print(r[i][j]%1000,end=' ')
    print()