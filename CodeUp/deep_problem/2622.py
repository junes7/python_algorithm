# 최대 최솟값 구하기(get maximum and minimum value)
# 반복문을 활용한 대표적인 알고리즘이 최대값과 최소값을 찾는 문제이다.
# 이 문제의 목적은 주어진 수열에서 최소값, 최대값, 최소값의 위치,
# 최대값의 위치를 찾는 것이다.
# 이 문제를 통하여 반복문의 연습이 될 것이다.
# 첫째 줄에는 입력되는 수열의 길이를 나타내는 정수 N이 주어진다.
# 둘째 줄에는 공백으로 구분된 N개의 정수 S_i가 차례로 주어진다.
# [입력값의 정의역]
# 3≤N≤10,000 | 0<=Si<=32767
# 첫째 줄에는 수열의 최댓값의 위치와 ":"과 최댓값을 공백으로 구분하여
# 출력한다. 둘째 줄에는 수열의 최솟값의 위치와 ":"과 최솟값을 공백으로
# 구분하여 출력한다. (단, 최대값이나 최소값이 여러 개 있을 경우에는
# 제일 먼저나오는 위치 및 값을 출력한다.)
# method 1
n = int(input())
d = list(map(int, input().split()))
max, min = d[0], d[0]
max_idx, min_idx = 1, 1
for i in range(1, n):
    if max < d[i]:
        max = d[i]
        max_idx = i+1
    if min > d[i]:
        min = d[i]
        min_idx = i+1
print(max_idx, ':', max)
print(min_idx, ':', min)
