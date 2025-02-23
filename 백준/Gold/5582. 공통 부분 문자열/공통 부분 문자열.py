import sys
input=lambda:sys.stdin.readline().rstrip()
str1 = input()
str2 = input()
def lcs(s1, s2):
    m, n = len(s1), len(s2)
    dp = [[0] * (n + 1) for _ in range(m + 1)]
    ans = 0
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if s1[i - 1] == s2[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
                ans = max(ans, dp[i][j])
    return ans
print(lcs(str1, str2))