# 기억력 테스트 3(memory test)
# 주현이 엄마는 주현이를 영재로 키우기 위해 매일 혹독한 기억력 테스트를 하고
# 있다. N개의 숫자를 먼저 말해주고, M개의 질문을 하면서 그 숫자를 몇 번째로
# 불렀는지 테스트한다. 이번 테스트가 어려울 것을 예상하여 N개의 데이터를
# 부를 때 오름차순으로 부른다. 이 테스트를 통과할 경우 주현이는 최신 장난감
# "또봇 W 쉴드온"을 받을 수 있다. 주현이를 도와 줄수 있는 프로그램을
# 작성하시오.
# 첫째줄에 N이 입력된다. (1≤N≤1,000,000)
# 둘째 줄에 N개의 서로 다른 숫자가 공백으로 구분되어 오름차순으로 입력된다.
# (데이터값의 범위 : 1 ~ 100,000,000)
# 셋째줄에 질문의 수 M이 입력된다. (1≤M≤100,000)
# 단, 질문은 오름차순으로 묻지 않는다. 넷째 줄에 M개의 질문이 입력된다.
# M개의 질문에 대해 그 숫자가 있었으면 그 숫자의 위치를 출력, 없었으면 -1을
# 차례대로 출력한다.
# method 1
n = int(input())
d = list(map(int, input().split()))
m = int(input())
q = list(map(int, input().split()))
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
for i in range(m):
    rlt = binarySearch(d, q[i], 0, n-1)
    if rlt == None:
        print(-1, end=' ')
    else:
        print(rlt+1, end=' ')