import sys
from heapq import heappush,heappop
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
m=int(input())
arr=[[] for _ in range(n+1)]
for _ in range(m):
    u,v,w=map(int,input().split())
    arr[u]+=[(v,w)]
S,E=map(int,input().split())
INF=float("INF")
dist=[INF]*(n+1)
def dijkstra(s):
    visited=[False]*(n+1)
    q,dist[s]=[(0,s)],0
    while q:
        d,v=heappop(q)
        if visited[v]: continue
        visited[v]=True
        for i,nv in arr[v]:
            distance=d+nv
            if distance<dist[i]:
                dist[i]=distance
                heappush(q,(distance,i))
dijkstra(S)
print(dist[E])