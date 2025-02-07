import sys
mii=lambda:map(int,sys.stdin.readline().rstrip().split())
n,m=mii()
arr=[[] for _ in range(n+1)]
for _ in range(m):
    u,v=mii()
    arr[u]+=[v]
    arr[v]+=[u]
cnt=0
def dfs(node):
    visited[node]=True
    for b in arr[node]:
        if not visited[b]:
            dfs(b)
visited=[False]*(n+1)
for a in range(1,n+1):
    if not visited[a]:
        dfs(a)
        cnt+=1
print(cnt)