import sys
def max_path_length(n,triangle):
    dp=[[0]*n for _ in range(n)]
    dp[0][0]=triangle[0][0]
    for i in range(1,n):
        for j in range(i+1):
            if j==0:
                dp[i][j]=dp[i-1][j]+triangle[i][0]
            elif j==i:
                dp[i][j]=dp[i-1][j-1]+triangle[i][i]
            else:
                dp[i][j]=max(dp[i-1][j-1],dp[i-1][j])+triangle[i][j]
    return max(dp[n-1])
mii=lambda:sys.stdin.readline().rstrip()
n=int(mii())
triangle=[list(map(int,mii().split())) for _ in range(n)]
print(max_path_length(n,triangle))