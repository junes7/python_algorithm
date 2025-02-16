n,arr=int(input()),[]
for _ in range(n):
    row=list(map(int,input().split()))
    arr+=[row]
team=[0]*(n)
ans=float("INF")
def dfs(pos):
    global ans
    if sum(team) == n//2:
        start,link=0,0
        for i in range(n-1):
            for j in range(i+1,n):
                cnt=team[i]+team[j]
                if cnt==2:
                    start+=arr[i][j]+arr[j][i]
                elif cnt==0:
                    link+=arr[i][j]+arr[j][i]
        start_link=abs(start-link)
        if start_link<ans:
            ans=start_link
        return
    for i in range(pos,n):
        team[i]=1
        dfs(i+1)
        team[i]=0
dfs(0)
print(ans)