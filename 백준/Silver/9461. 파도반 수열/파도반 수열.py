t=int(input())
dp=[0,1,1,1,2,2]
def solve():
    for i in range(6,100+1):
        dp.append(dp[i-1]+dp[i-5])
solve()
for _ in range(t):
    n=int(input())
    print(dp[n])