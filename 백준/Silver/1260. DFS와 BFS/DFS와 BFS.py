import sys
from collections import deque
input=lambda:sys.stdin.readline().rstrip()
n,m,st=map(int,input().split())
visited=[False]*(n+1)
def dfs(node):
    global ans
    visited[node]=True
    for i in arr[node]:
        if not visited[i]:
            ans+=[i]
            dfs(i)
def bfs(st):
    visited=[False]*(n+1)
    global ans
    q=deque()
    q+=[st]
    visited[st]=True
    while q:
        node=q.popleft()
        ans+=[node]
        for next_node in arr[node]:
            if not visited[next_node]:
                q+=[next_node]
                visited[next_node]=True
arr=[[] for i in range(n+1)]
for i in range(m):
    u,v=map(int,input().split())
    arr[u]+=[v]
    arr[v]+=[u]
for i in range(1,n+1):
    arr[i].sort()
ans=[st]
dfs(st)
for a in ans:
    print(a,end=' ')
print()
ans=[]
bfs(st)
for a in ans:
    print(a,end=' ')