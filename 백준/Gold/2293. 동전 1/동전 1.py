import sys
def count_coin_cases(n,k,coins):
    dp=[0]*(k+1)
    dp[0]=1
    for coin in coins:
        for j in range(coin,k+1):
            dp[j]+=dp[j-coin]
    return dp[k]
mii=lambda:sys.stdin.readline().rstrip()
n,k=map(int,mii().split())
coins=[int(mii()) for i in range(n)]
print(count_coin_cases(n,k,coins))