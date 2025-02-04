import sys
sys.setrecursionlimit(10**4)
dy=(-1,-1,-1,1,1,1,0,0)
dx=(-1,0,1,-1,0,1,-1,1)

def dfs(y,x):
    visited[y][x]=True
    for i in range(8):
        ny=y+dy[i]
        nx=x+dx[i]
        if 0<=ny<H and 0<=nx<W:
            if not visited[ny][nx] and arr[ny][nx]:
                dfs(ny,nx)

while True:
    mii=lambda:map(int,sys.stdin.readline().rstrip().split())
    W,H=mii()
    if not(W and H):
        break
    arr=[list(mii()) for _ in range(H)]
    cnt=0
    visited=[[False]*W for _ in range(H)]
    for i in range(H):
        for j in range(W):
            if not visited[i][j] and arr[i][j]:
                dfs(i,j)
                cnt+=1
    print(cnt)