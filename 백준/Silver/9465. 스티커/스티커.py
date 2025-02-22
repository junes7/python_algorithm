import sys
input=lambda:sys.stdin.readline().rstrip()
t=int(input())
for _ in range(t):
    n=int(input())
    arr=[[*map(int,input().split())] for _ in range(2)]
    dp=[[0]*(n+1) for _ in range(3)]
    for i in range(1,n+1):
        dp[0][i]=max(dp[0][i-1],dp[1][i-1],dp[2][i-1])
        dp[1][i]=max(dp[0][i-1],dp[2][i-1])+arr[0][i-1]
        dp[2][i]=max(dp[0][i-1],dp[1][i-1])+arr[1][i-1]
    print(max(dp[0][n],dp[1][n],dp[2][n]))