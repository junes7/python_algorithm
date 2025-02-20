import sys
input=lambda:sys.stdin.readline().rstrip()
n,k=map(int,input().split())
maxn=987654321
coins=[int(input()) for _ in range(n)]
memo=[[maxn]*(k+1) for _ in range(n)]
for i in range(n):
    memo[i][0]=0
    for j in range(1,k+1):
        case1,prev_k=maxn,j-coins[i]
        if 0<=prev_k:
            case1=memo[i][prev_k]+1
        case2=memo[i-1][j]
        memo[i][j]=min(case1,case2)
print(-1 if memo[n-1][k]==maxn else memo[n-1][k])