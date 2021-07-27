# 연월일 입력받아 순서 바꿔 출력하기
# (print year, month, day with reverse order)
# "연도.월.일"을 입력받아 "일-월-연도" 순서로 바꿔 출력해 보자.
import sys
input = sys.stdin.readline
y, m, d = map(int, input().split('.'))
print(d, m, y, sep='-')