# 시간 입력받아 그대로 출력하기(print time originally)
# 24시간 시:분 형식으로 시간이 입력될 때, 그대로 출력하는 연습을 해보자.
import sys
input = sys.stdin.readline
a, b = map(int, input().split(':'))
print(a, b, sep=':')