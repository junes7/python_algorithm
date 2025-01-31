import sys
n,m=map(int,sys.stdin.readline().rstrip().split())
num=[[0]*(n+1)]
num+=[[0]+list(map(int,sys.stdin.readline().rstrip().split())) for i in range(n)]
for i in range(1,n+1):
    for j in range(1,n+1):
        num[i][j]+=num[i-1][j]+num[i][j-1]-num[i-1][j-1]
for i in range(m):
    pt=list(map(int,sys.stdin.readline().rstrip().split()))
    print(num[pt[2]][pt[3]]-num[pt[2]][pt[1]-1]-num[pt[0]-1][pt[3]]+num[pt[0]-1][pt[1]-1])