import sys
input=lambda:sys.stdin.readline().rstrip()
c,n=map(int,input().split())
cost,customer=[],[]
for i in range(n):
    ct,cs=map(int,input().split())
    cost+=[ct]
    customer+=[cs]
dp=[[0]*(c+1) for _ in range(n)]
def solve(n,c):
    if n<0: return float("INF")
    if c<=0: return 0
    if dp[n][c]: return dp[n][c]
    case1=solve(n-1,c)
    case2=solve(n,c-customer[n])+cost[n]
    dp[n][c]=min(case1,case2)
    return dp[n][c]
print(solve(n-1,c))