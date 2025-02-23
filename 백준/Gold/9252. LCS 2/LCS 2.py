import sys
input=lambda:sys.stdin.readline().rstrip()
str1 = input()
str2 = input()
def lcs(s1, s2):
    m, n = len(s1), len(s2)
    dp = [[""] * (n + 1) for _ in range(m + 1)]
    for i in range(1, m + 1):
        for j in range(1, n + 1):
            if s1[i - 1] == s2[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + s1[i - 1]
            else:
                if len(dp[i - 1][j]) < len(dp[i][j - 1]):
                    dp[i][j] = dp[i][j - 1]
                else:
                    dp[i][j] = dp[i - 1][j]
    print(len(dp[m][n]))
    print(dp[m][n])
lcs(str1, str2)