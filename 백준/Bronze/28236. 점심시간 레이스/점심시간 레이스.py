import sys
input=lambda:sys.stdin.readline().rstrip()
n,m,k=map(int,input().split())
rlt=[]
for i in range(k):
    s=0
    a,b=map(int,input().split())
    s+=m+1-b
    if a>1:
        s+=a-1
    rlt+=[[i+1,s]]
rlt.sort(key=lambda x:(x[1],x[0]))
print(rlt[0][0])