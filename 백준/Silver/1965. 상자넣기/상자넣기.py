import sys
input=lambda:sys.stdin.readline().rstrip()
def max_nested_boxes(n, boxes):
    dp = [1] * n
    for i in range(n):
        for j in range(i):
            if boxes[j] < boxes[i]:
                dp[i] = max(dp[i], dp[j]+1)
    return max(dp)
n = int(input())
boxes = list(map(int, input().split()))
print(max_nested_boxes(n, boxes))