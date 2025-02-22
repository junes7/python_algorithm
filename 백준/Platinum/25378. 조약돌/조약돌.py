import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
stone=[*map(int,input().split())]
dp=[0]*n
for i in range(n):
    remain=stone[i];
    dp[i]=max(dp[i],dp[i-1])
    for j in range(i+1,n):
        remain=stone[j]-remain
        if remain<0: break
        elif remain==0:
            dp[j]=dp[i-1]+1
print(n-dp[-1])