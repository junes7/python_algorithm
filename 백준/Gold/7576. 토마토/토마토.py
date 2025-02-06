import sys
from collections import deque
mii=lambda:map(int,sys.stdin.readline().rstrip().split())
m,n=mii()
arr=[]
que=deque()
for i in range(n):
    row=list(mii())
    arr+=[row]
    for j in range(m):
        if row[j]==1:
            que+=[(i,j)]
dy=[-1,1,0,0]
dx=[0,0,-1,1]
def bfs(que):
    while que:
        y,x=que.popleft()
        for i in range(4):
            ny=y+dy[i]
            nx=x+dx[i]
            if 0<=ny<n and 0<=nx<m:
                if arr[ny][nx]==0:
                    arr[ny][nx]=arr[y][x]+1
                    que+=[(ny,nx)]
bfs(que)
def get_day():
    ans=0
    for row in arr:
        if 0 in row:
            return -1
        row_max=max(row)
        if ans<row_max:
            ans=row_max;
    return ans-1;
print(get_day())