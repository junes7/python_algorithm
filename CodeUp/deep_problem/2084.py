# Linear Structure Search (Large)
# n개로 이루어진 정수 집합에서 원하는 수의 위치를 찾으시오.
# 단, 입력되는 집합은 오름차순으로 정렬되어 있으며, 같은 수는 없다.
# 첫 줄에 원소의 개수를 나타내는 정수 n이 입력된다.
# 둘째 줄에 n개의 정수가 공백으로 구분되어 입력된다.
# 셋째 줄에 질문의 수 m이 입력된다.
# 네번째 줄부터 m줄에 걸쳐서 한 줄에 하나씩 찾고자 하는 수 s가 입력된다.
# [입력값의 정의역]
# 2 <= n <= 1,000,000
# 1 <= m <= 100,000
# 1 <= s <= n
# 각 원소의 절댓값 크기는 100,000,000을 넘지 않는다.
# 한 줄에 하나씩 찾고자 하는 원소의 위치를 출력한다. 없으면 -1을 출력한다.
# method 1
n = int(input())
d = list(map(int, input().split()))
m = int(input())
r = []
def binarySearch(array, target, st, end):
    if st > end:
        return None
    mid = (st+end) // 2
    if array[mid] == target:
        return mid
    elif target < array[mid]:
        return binarySearch(array, target, st, mid-1)
    else:
        return binarySearch(array, target, mid+1, end)
for i in range(m):
    s = int(input())
    rlt = binarySearch(d, s, 0, n-1)
    if rlt == None:
        r.append(-1)
    else:
        r.append(rlt+1)
for i in range(len(r)):
    print(r[i])