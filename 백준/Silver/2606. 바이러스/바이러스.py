import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
m=int(input())
arr=[[] for _ in range(n+1)]
for i in range(m):
    u,v=map(int,input().split())
    arr[u]+=[v]
    arr[v]+=[u]
visited=[False]*(n+1)
ans=0
def dfs(node):
    global ans
    visited[node]=True
    ans+=1
    for a in arr[node]:
        if not visited[a]:
            dfs(a)
dfs(1)
print(ans-1)