import sys
from collections import deque
mii=lambda:map(int,sys.stdin.readline().rstrip().split())
n,m=mii()
arr=[[] for _ in range(n+1)]
for i in range(m):
    u,v=mii()
    arr[u]+=[v]
    arr[v]+=[u]
def bfs(start):
    visited=[-1]*(n+1)
    q=deque()
    q+=[start]
    visited[start]=0
    while q:
        node=q.popleft()
        for next_node in arr[node]:
            if visited[next_node]==-1:
                visited[next_node]=visited[node]+1
                q+=[next_node]
    total=sum(visited)
    return total
ans,min_total=0,float("INF")
for i in range(1,n+1):
    total=bfs(i)
    if total<min_total:
        min_total=total
        ans=i
print(ans)