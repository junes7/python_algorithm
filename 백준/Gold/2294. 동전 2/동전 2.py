import sys
input=lambda:sys.stdin.readline().rstrip()
N,K=map(int,input().split())
maxn=float("INF")
coins=[int(input()) for _ in range(N)]
memo=[[maxn]*(K+1) for _ in range(N)]
for a in range(N):
    memo[a][0]=0
    for b in range(1,K+1):
        case1,prev_k=maxn,b-coins[a]
        if 0<=prev_k:
            case1=memo[a][prev_k]+1
        case2=memo[a-1][b]
        memo[a][b]=min(case1,case2)
print(-1 if memo[N-1][K]==maxn else memo[N-1][K])