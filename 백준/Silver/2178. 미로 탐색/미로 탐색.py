import sys
from collections import deque
def bfs():
    visited[0][0]=1
    q=deque()
    q+=[(0,0)]
    dy=(-1,1,0,0)
    dx=(0,0,-1,1)
    while q:
        y,x=q.popleft()
        for i in range(4):
            ny=y+dy[i]
            nx=x+dx[i]
            if not(0<=nx<m and 0<=ny<n):
                continue
            if visited[ny][nx]==-1 and arr[ny][nx]=='1':
                visited[ny][nx]=visited[y][x]+1
                q+=[(ny,nx)]
mii=lambda:sys.stdin.readline().rstrip()
n,m=map(int,mii().split())
arr=[mii() for _ in range(n)]
visited=[[-1]*m for _ in range(n)]
bfs()
print(visited[n-1][m-1])