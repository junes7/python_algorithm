import sys
input=lambda:sys.stdin.readline().rstrip()
n,mod=int(input()),9901
dp=[[1]*3 for _ in range(n)]
for i in range(1,n):
    dp[i][0]=(dp[i-1][0]+dp[i-1][1]+dp[i-1][2])%mod
    dp[i][1]=(dp[i-1][0]+dp[i-1][2])%mod
    dp[i][2]=(dp[i-1][0]+dp[i-1][1])%mod
rst=(dp[n-1][0]+dp[n-1][1]+dp[n-1][2])%mod
print(rst)