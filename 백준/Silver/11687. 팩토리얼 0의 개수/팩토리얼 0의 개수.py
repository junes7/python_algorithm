import sys
input=lambda:sys.stdin.readline().rstrip()
def count_zero(n):
    cnt = 0
    while n >= 5:
        cnt += n // 5
        n = n // 5
    return cnt
# M : 원하는 0의 개수
M = int(input())
lower = 1
upper = M * 5
rlt = 100000000
while lower <= upper:
    mid = (lower + upper) // 2
    zero = count_zero(mid)
    if zero < M:		# M보다 적게나왔으면 mid값을 키운다
        lower = mid + 1
    elif zero >= M:		# M보다 크게나왔으면 mid값을 작게한다
        if zero == M:
            rlt = mid
        upper = mid - 1
print(-1 if rlt==100000000 else rlt)