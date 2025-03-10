import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
board=[[0]*(m+2) for _ in range(n+2)]
for i in range(1,n+1):
    st=input()
    for j in range(1,m+1):
        board[i][j]=int(st[j-1])
ld=[[0]*(m+2) for _ in range(n+2)]
rd=[[0]*(m+2) for _ in range(n+2)]
lu=[[0]*(m+2) for _ in range(n+2)]
ru=[[0]*(m+2) for _ in range(n+2)]
for i in range(n,0,-1):
    for j in range(1,m+1):
        if board[i][j]==1:
            ld[i][j]=ld[i+1][j-1]+1
            rd[i][j]=rd[i+1][j+1]+1
for i in range(1,n+1):
    for j in range(1,m+1):
        if board[i][j]==1:
            lu[i][j]=lu[i-1][j-1]+1
            ru[i][j]=ru[i-1][j+1]+1
result=0
for i in range(1,n+1):
    for j in range(1,m+1):
        l=result if result>0 else 1
        for k in range(l,min(ld[i][j],rd[i][j])+1):
            t=i+2*(k-1)
            if t>n+1: break
            if board[t][j] and lu[t][j]>=k and ru[t][j]>=k:
                result=k
        for k in range(l,min(ru[i][j],rd[i][j])+1):
            t=j+2*(k-1)
            if t>m+1: break
            if board[i][t] and lu[i][t]>=k and ld[i][t]>=k:
                result=k
print(result)