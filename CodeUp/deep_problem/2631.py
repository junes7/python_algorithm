# 보물 찾기(Treasure Hunt)
# 수열 속에 숨어) 있는 보물들을 찾아보자. n개의 자연수로 이루어진 수열이 있다.
# 이 수열들 중 연속된 1개 이상의 원소들의 합이 정확히 k가 되면 이 구간은
# 보물구간이라고 한다. 주어진 n개의 자연수 중에서 보물 구간이 몇 개 있는지
# 구하는 프로그램을 작성하시오.
# 첫 번째 줄에 자연수 n과 k가 공백으로 구분되어 입력된다.
# 두 번째 줄에 n개의 각 원소가 공백으로 구분되어 입력된다.
# [입력값의 정의역]
# 5<=n<=100,000
# 각 원소는 1,000이하의 자연수
# 보물 구간의 수를 출력한다.
# method 1
# import sys
# input = sys.stdin.readline
# n, k = map(int, input().split())
# d = list(map(int, input().split()))
# t, cnt = 0, 0
# 2중 for문 이라서 시간초과!!
# for i in range(n):
#     # 첫 항이 K보다 크면 무시하기
#     if d[i] > k:
#         continue
#     t = d[i]
#     if t == k:
#         cnt += 1
#         continue
#     else:
#         for j in range(i+1, n):
#             t += d[j]
#             # 합이 K보다 크면
#             if t > k:
#                 break
#             elif t == k:
#                 cnt += 1
#                 break
# sys.stdout.write(str(cnt))
# 구간 합 15를 찾아야 한다면 15 이상의 값이 될 때까지 j인덱스를 증가시켜 주면
# 됩니다. 인덱스 범위의 합을 계속 증가시켜나갑니다. 만약, [0]+[1]+[2]의 합이
# 15 이상이라면 이제 i인덱스를 증가시켜주면 됩니다. 인덱스 범위의 합이 15
# 이하일 때까지 줄여나갑니다. 이 과정 중 구간의 합이 15라면 count 해주면 된다.
# method 2
import sys
input = sys.stdin.readline
n, k = map(int, input().split())
d = list(map(int, input().split()))
d.append(0)
i, j, sum, cnt = 0, 0, d[0], 0
while i != n-1:
    if j >= n-1:
        sum-=d[i]
        if sum == k:
            cnt += 1
        continue
    # sum이 k보다 작으면 j를 움직입니다.
    if sum < k:
        j += 1
        sum += d[j]
    # sum이 k보다 크면 i를 움직입니다.
    if sum > k:
        sum -= d[i]
        i += 1
    # sum이 k랑 같으면 count를 세고 j를 움직입니다.
    if sum == k:
        cnt += 1
        j += 1
        sum += d[j]
print(cnt)