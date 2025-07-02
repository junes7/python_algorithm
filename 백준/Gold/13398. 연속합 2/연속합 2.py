import sys
input=lambda:sys.stdin.readline().rstrip()
def max_consecutive_sum(n, arr):
    # 제거하지 않은 경우의 최대 연속합
    dp1 = [0] * n
    # 하나를 제거한 경우의 최대 연속합
    dp2 = [0] * n
    dp1[0] = arr[0]
    dp2[0] = 0  # 첫 번째 원소를 제거하는 경우
    result = dp1[0]
    for i in range(1, n):
        # 현재 원소를 포함하는 경우와 새로운 수열을 시작하는 경우 중 큰 값 선택
        dp1[i] = max(dp1[i-1] + arr[i], arr[i])
        # 현재 원소를 제거하거나, 이전에 제거한 경우에 현재 원소를 포함
        dp2[i] = max(dp1[i-1], dp2[i-1] + arr[i])
        result = max(result, dp1[i], dp2[i])
    return result
n = int(input())
arr = list(map(int, input().split()))
print(max_consecutive_sum(n, arr))