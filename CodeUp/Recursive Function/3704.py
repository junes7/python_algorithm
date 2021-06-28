# 계단 오르기 2(Climbing stairs)
# n개의 계단이 있다. 어떤 사람이 계단을 오르려 하는데 이 사람은 계단을 한번에
# 1계단 2계단 또는 3계단씩 오를 수 있다. 이 사람이 계단을 오를 수 있는 경우의
# 수를 1000으로 나눈 나머지를 구하여라.
# 계단의 수 n이 입력| 계단을 오를 수 있는 가지수에 1000으로 나눈 나머지 출력
# method 1
import sys
sys.setrecursionlimit(1000000)
n = int(input())
d = [0] * 200000
def st_case(n):
    if d[n] != 0:
        return (d[n]) % 1000
    else:
        if n == 1:
            d[n] = 1
        elif n == 2:
            d[n] = 1 + st_case(1)
        elif n == 3:
            d[n] = 1 + st_case(1) + st_case(2)
        else:
            d[n] = st_case(n-1) + st_case(n-2) + st_case(n-3)
        return (d[n]) % 1000
print(st_case(n))