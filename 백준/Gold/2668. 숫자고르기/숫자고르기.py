import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr,ans=[[] for _ in range(n+1)],[]
def dfs(start,n):
    visited[n]=True
    for nn in arr[n]:
        if not visited[nn]:
            dfs(start,nn)
        elif start==nn:
            ans.append(start)
            return 
for i in range(1,n+1):
    arr[int(input())]+=[i]
for i in range(1,n+1):
    visited=[False]*(n+1)
    dfs(i,i)
ans.sort()
print(len(ans))
for a in ans:
    print(a)