import sys
from collections import deque
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
visited=[-1]*(n+1)
arr=[[] for _ in range(n+1)]
start,end=map(int,input().split())
m=int(input())
for i in range(m):
    u,v=map(int,input().split())
    arr[u]+=[v]
    arr[v]+=[u]
def bfs(st):
    q=deque([st])
    visited[st]=0
    r=0
    while q:
        node=q.popleft()
        if node==end:
            return
        r+=1
        for nn in arr[node]:
            if visited[nn]==-1:
                visited[nn]=visited[node]+1;
                q+=[nn]
bfs(start)
print(visited[end])