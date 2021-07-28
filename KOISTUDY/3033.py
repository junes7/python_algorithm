# 시분초 입력받아 분만 출력하기
# print minute in time
# 시:분:초 형식으로 시간이 입력될 때 분만 출력해보자.
# 분만 어떻게 출력할 수 있을까? 분이 저장된 변숫값만 출력하면 된다.
# 시:분:초 형식으로 시간이 입력된다.
import sys
input = sys.stdin.readline
h, m, s = map(int, input().split(':'))
sys.stdout.write(str(m))