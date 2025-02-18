import sys
input=lambda:sys.stdin.readline().rstrip()
dp=[0,1,1,1,2,2]
for i in range(6,101):
    dp+=[dp[i-1]+dp[i-5]]
for _ in range(int(input())):
    print(dp[int(input())])