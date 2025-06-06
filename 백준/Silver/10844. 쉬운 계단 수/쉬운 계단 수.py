import sys
input=lambda:sys.stdin.readline().rstrip()
n,mod=int(input()),1000000000
dp=[[0]*10 for _ in range(n+1)]
for j in range(1,10):
    dp[1][j]=1
for i in range(2,n+1):
    for j in range(10):
        if 0<j:
            dp[i][j]+=dp[i-1][j-1]
        if j<9:
            dp[i][j]+=dp[i-1][j+1]
        dp[i][j]%=mod
cnt=0
for j in range(10):
    cnt+=dp[n][j]
    cnt%=mod
print(cnt)