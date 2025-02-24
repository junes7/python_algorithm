import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
MOD = 1000000000
BIT = 1 << 10
dp = [[[0] * BIT for _ in range(10)] for _ in range(n)]
for j in range(1, 10):
    dp[0][j][1 << j] = 1
for i in range(1, n):
    for j in range(10):
        for bit in range(BIT):
            nxt_bit = bit | 1 << j
            if 0 < j:
                dp[i][j][nxt_bit] += dp[i - 1][j - 1][bit]
            if j < 9:
                dp[i][j][nxt_bit] += dp[i - 1][j + 1][bit]
            dp[i][j][nxt_bit] %= MOD
cnt = 0
for j in range(10):
    cnt += dp[n - 1][j][BIT - 1]
    cnt %= MOD
print(cnt)