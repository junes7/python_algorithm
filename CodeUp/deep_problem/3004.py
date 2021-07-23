# 데이터 재정렬(data rearrangement)
# 프로그래밍 문제를 풀다 보면 뒤죽박죽인 N개의 데이터를 숫자의 크기 순으로
# 0 ~ N-1까지의 숫자로 재정렬 해야되는 경우가 종종 있다. 예를 들어 N=5 이고,
# 50 23 54 24 123 이라는 데이터가 있다면, 2 0 3 1 4가 된다.
# 데이터를 재정렬하는 프로그램을 작성하시오.
# 첫째 줄에 데이터의 개수 N이 입력된다. ( 1 <= N <= 50,000)
# 둘째 줄에 공백으로 분리되어 N개의 서로 다른 데이터가 입력된다. (값의 범위:
# 0~500,000)
# N개의 데이터를 0 ~ N-1로 재정렬하여 출력하라.
# method 1
n = int(input())
d = list(map(int, input().split()))
s = sorted(d)
def binarySearch(array, target, st, end):
    if st > end:
        return None
    mid = (st + end) // 2
    if array[mid] == target:
        return mid
    elif target < array[mid]:
        return binarySearch(array, target, st, mid-1)
    else:
        return binarySearch(array, target, mid+1, end)
for i in range(n):
    rlt = binarySearch(s, d[i], 0, n-1)
    print(rlt, end=' ')