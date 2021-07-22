# 이분 탐색(Binary Search)
# n개로 이루어진 정수 집합에서 원하는 수의 위치를 찾으시오. 단, 입력되는
# 집합은 오름차순으로 정렬되어 있으며, 같은 수는 없다.
# 첫 줄에 한 정수 n과 찾고자 하는 값 s가 공백으로 구분되어 입력되고, 둘째
# 줄에 n개의 정수가 공백으로 구분되어 입력된다. (단, 2 <= n <= 1,000,000 ,
# 각 원소의 크기는 100,000,000을 넘지 않는다.)
# 찾고자 하는 원소의 위치를 출력한다. 없으면 -1을 출력한다.
# method 1
n, s = map(int, input().split())
d = list(map(int, input().split()))
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
rlt = binarySearch(d, s, 0, n-1)
if rlt == None:
    print(-1)
else:
    print(rlt+1)