import sys
input=lambda:sys.stdin.readline().rstrip()
dp=[1]*117
for i in range(4,117):
    dp[i]=dp[i-1]+dp[i-3]
print(dp[int(input())])