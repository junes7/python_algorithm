import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
play,maxn,rlt=[],[0]*m,[0]*n
for i in range(n):
    play+=[sorted([*map(int,input().split())])]
    for j in range(m):
        if maxn[j]<play[i][j]:
            maxn[j]=play[i][j]
for j in range(m):
    for i in range(n):
        if play[i][j]==maxn[j]:
            rlt[i]+=1
idx=[]
for i in range(n):
    if rlt[i]==max(rlt):
        idx+=[i+1]
idx.sort()
print(*idx)