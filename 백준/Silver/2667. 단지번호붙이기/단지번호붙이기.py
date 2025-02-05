import sys
def dfs(y,x):
    visited[y][x]=True
    dy=[-1,1,0,0]
    dx=[0,0,-1,1]
    cnt=1
    for i in range(4):
        ny=y+dy[i]
        nx=x+dx[i]
        if 0<=ny<n and 0<=nx<n:
            if not visited[ny][nx] and arr[ny][nx]=='1':
                cnt+=dfs(ny,nx)
    return cnt
mii=lambda:sys.stdin.readline().rstrip()
n=int(mii())
arr=[mii() for _ in range(n)]
visited=[[False]*n for _ in range(n)]
r=sorted([dfs(i,j) for i in range(n) for j in range(n) if not visited[i][j] and arr[i][j]=='1'])
print(len(r))
for i in r:
    print(i)