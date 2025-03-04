import sys
input=lambda:sys.stdin.readline().rstrip()
n,k=map(int,input().split())
classrooms=[*map(int,input().split())]
dp=[0]*n
dp[0]=classrooms[0]
for i in range(1,n):
    dp[i]=dp[i-1]+classrooms[i]
dp.sort(reverse=True)
print(sum(dp[:k]))