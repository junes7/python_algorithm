# 기억력 테스트 4(memory test)
# 테스트 3을 무사히 마친 주현이는 테스트 4에 도전하게 되었다. 주현이 엄마는
# 이번에 무작위로 숫자 N개를 불러준다음, M개의 질문을 하기로 했다. 질문으로
# 그 숫자가 있었으면 그 숫자를 몇 번째로 불렀는지 출력하고, 없었다면 -1을 출력.
# 이 테스트에는 주현이가 좋아하는 '또봇 X, Y, Z'가 걸려있다. 주현이를 도와줄
# 수 있는 프로그램을 만드시오.
# 첫째줄에 N이 입력된다. (1 <= N <= 1,000,000) 둘째 줄에 N개의 서로 다른
# 숫자가 공백으로 구분되어 입력. (데이터값의 범위 : 1 ~ 100,000,000)
# 셋째줄에 질문의 수 M이 입력된다. (1 <= M <= 100,000)
# 넷째 줄에 M개의 질문이 입력된다.
# M개의 질문에 대해 그 숫자가 있었으면 그 숫자를 몇 번째로 불렀는지를 출력,
# 없었으면 -1을 하나씩 차례대로 출력한다.
# method 1
import sys
input = sys.stdin.readline
output = sys.stdout.write
n = int(input())
d = list(map(int, input().split()))
m = int(input())
q = list(map(int, input().split()))
r = {}
for i in range(n):
    r[d[i]] = i + 1
d.sort()
def binarySearch(array, target, st, end):
    if st > end:
        return None
    mid = (st+end) // 2
    if target == array[mid]:
        return r[array[mid]]
    elif target < array[mid]:
        return binarySearch(array, target, st, mid-1)
    else:
        return binarySearch(array, target, mid+1, end)
for i in range(m):
    rlt = binarySearch(d, q[i], 0, n-1)
    if rlt == None:
        t = str(-1) + ' '
    else:
        t = str(rlt) + ' '
    output(t)