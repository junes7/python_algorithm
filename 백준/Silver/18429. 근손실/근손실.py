import sys
input=lambda:map(int,sys.stdin.readline().rstrip().split())
n,k=input()
arr=list(input())
ans=0
visited=[False]*n
def dfs(num,weight):
    global ans
    if weight<500:
        return
    if num==n:
        ans+=1
        return
    weight-=k
    for i in range(n):
        if visited[i]:
            continue
        visited[i]=True
        dfs(num+1,weight+arr[i])
        visited[i]=False
dfs(0,500)
print(ans)