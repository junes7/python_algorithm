import sys
input=lambda:sys.stdin.readline().rstrip()
k=int(input())
dp=[0]*(k+1)
dp[1]=1
for i in range(2,k+1):
    dp[i]=dp[i-1]+dp[i-2]
print(dp[k-1],dp[k])