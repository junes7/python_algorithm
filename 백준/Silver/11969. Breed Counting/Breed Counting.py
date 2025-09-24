import sys;
input = sys.stdin.readline
N, Q = map(int, input().split())
cows = [[0] * (N + 1) for _ in range(3)] # 각 번호마다 어떤 품종의 소인지 체크
for i in range(1, N + 1):
    cows[int(input()) - 1][i] = 1
# 품종 별로 누적 합 배열 만들기
prefix_sum = [[0] * (N + 1) for _ in range(3)]
for i in range(3):
    for j in range(1, N + 1):
        prefix_sum[i][j] = prefix_sum[i][j - 1] + cows[i][j]
# 구간이 주어질 때마다 품종 별로 몇 마리가 있는지 누적 합 배열을 이용하여 구하기
for _ in range(Q):
    a, b = map(int, input().split())
    for i in range(3):
        print(prefix_sum[i][b] - prefix_sum[i][a - 1], end = ' ')
    print()