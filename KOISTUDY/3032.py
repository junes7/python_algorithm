# 연월일 입력받아 나누어 출력하기
# (print date after split year, month, day)
# 6자리의 연월일(YYMMDD)을 입력 받은 후, 부분별로 나누어 출력해 보자.
# (*YY 는 2자리 연도, MM 은 2자리 월, DD 는 2자리 일을 의미한다.)
import sys
input = sys.stdin.readline
d = input()
print(d[0:2], d[2:4], d[4:6])