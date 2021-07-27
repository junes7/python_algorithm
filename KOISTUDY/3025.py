# 정수 2개 입력받아 그대로 출력하기 1(print two integers)
# 줄을 바꿔 정수(integer) 2개를 입력받아 줄을 바꿔 출력해 보자.
import sys
input = sys.stdin.readline
a = int(input())
b = int(input())
print(a, b, sep='\n')