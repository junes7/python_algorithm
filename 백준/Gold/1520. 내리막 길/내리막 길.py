import sys
sys.setrecursionlimit(10**5)
input=lambda:sys.stdin.readline().rstrip()
m,n=map(int,input().split())
arr=[list(map(int,input().split())) for _ in range(m)]
dp=[[-1]*n for _ in range(m)]
dy=(-1,1,0,0)
dx=(0,0,-1,1)
def solve(y,x):
    if y==m-1 and x==n-1: return 1
    if dp[y][x]!=-1: return dp[y][x]
    dp[y][x]=0
    for i in range(4):
        ny=y+dy[i]
        nx=x+dx[i]
        if 0<=ny<m and 0<=nx<n:
            if arr[ny][nx]<arr[y][x]:
                dp[y][x]+=solve(ny,nx)
    return dp[y][x]
print(solve(0,0))