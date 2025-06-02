import sys
input=lambda:sys.stdin.readline().rstrip()
a,b,n,w=map(int,input().split())
rlt=[]
for i in range(1,n):
    if a*i+b*(n-i)==w:
        rlt+=[[i,n-i]]
if len(rlt)==1:
    print(*rlt[0])
else:
    print(-1)