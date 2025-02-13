import sys
from collections import deque
def bfs(n,m,grid):
    directions=[(-1,0),(1,0),(0,-1),(0,1)]
    visited=[[[False]*2 for _ in range(m)] for _ in range(n)]
    que=deque([(0,0,0,1)])
    visited[0][0][0]=True
    while que:
        y,x,wall_broken,dist=que.popleft()
        if y==n-1 and x==m-1:
            return dist
        for dy,dx in directions:
            # ny=y+dy
            # nx=x+dx
            ny,nx=y+dy,x+dx
            if 0<=ny<n and 0<=nx<m:
                if grid[ny][nx]==0 and not visited[ny][nx][wall_broken]:
                    visited[ny][nx][wall_broken]=True
                    que+=[(ny,nx,wall_broken,dist+1)]
                elif grid[ny][nx]==1 and wall_broken==0 and not visited[ny][nx][1]:
                    visited[ny][nx][1]=True
                    que+=[(ny,nx,1,dist+1)]
    return -1
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
grid=[[int(a) for a in input()] for _ in range(n)]
print(bfs(n,m,grid))