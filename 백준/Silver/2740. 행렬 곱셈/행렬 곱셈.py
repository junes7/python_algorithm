import sys
mii=lambda:map(int,sys.stdin.readline().rstrip().split())
n,m=mii()
a=[list(mii()) for _ in range(n)]
m,k=mii()
b=[list(mii()) for _ in range(m)]
r=[]
for i in range(n):
    t=[]
    for j in range(k):
        s=0
        for l in range(m):
            s+=a[i][l]*b[l][j]
        t+=[s]
    r+=[t]
for i in range(len(r)):
    for j in range(len(r[i])):
        print(r[i][j],end=' ')
    print()