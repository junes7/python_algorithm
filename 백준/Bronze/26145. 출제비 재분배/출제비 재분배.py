import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
s=[*map(int,input().split())]
rlt=s+[0]*m
for i in range(n):
    mlist=[*map(int,input().split())]
    for j in range(n+m):
        rlt[i]-=mlist[j];
        rlt[j]+=mlist[j]
for i in rlt:
    print(i,end=' ')