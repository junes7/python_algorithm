# 정수 2개 입력받아 합 계산하기
# calculate sum of two integers
# 정수 2개를 입력받아 그 합을 출력해 보자.
import sys
input = sys.stdin.readline
a, b = map(int, input().split())
sys.stdout.write(str(a+b))