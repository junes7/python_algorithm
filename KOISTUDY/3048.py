# 정수 2개 입력받아 거듭제곱 계산하기
# calculate power of two integers
# 정수 2개(a, b)를 입력받아 a를 b번 곱해 거듭제곱한 값을 출력해 보자.
# (*2를 10번 거듭제곱한 값은 2^10 즉, 2를 10번 곱한 2*2*2*2*2*2*2*2*2*2 값을 의미한다.)
# method 1
# a, b = map(int,input().split())
# print(a**b)
# method 2
import sys
a, b = map(int, sys.stdin.readline().split())
sys.stdout.write(str(a ** b))