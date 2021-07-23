# 데이터 탐색(Data Search)
# n개의 데이터가 있을 때, 특정 데이터가 어떤 위치에 있는지 찾는 것이 문제이다.
# 이 특정 데이터를 찾는 방법의 가장 기본적인 방법으로 선형탐색이 있다.
# 이는 데이터 셋에서 처음부터 차례대로 찾는 방법이다.
# 첫째 줄에 데이터의 개수 n이 입력된다.(1 <= n <= 100,000)
# 둘째 줄에 n개의 양의 정수 데이터가 공백으로 분리되어 입력된다.
# 셋째 줄에 찾고자 하는 특정데이터 정수k 가 입력된다.
# k를 찾았으면 데이터 k의 위치를 출력하고, 찾지 못했으면 -1을 출력한다.
# method 1 with linear search
n = int(input())
d = list(map(int, input().split()))
k = int(input())
rlt = 0
for i in range(n):
    if d[i] == k:
        rlt = i+1
        break
if rlt == 0:
    print(-1)
else:
    print(rlt)