import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n=int(input())
    dp=[0,1,2,4]
    if n>3:
        for i in range(4,n+1):
            dp+=[dp[i-1]+dp[i-2]+dp[i-3]]
    print(dp[n])