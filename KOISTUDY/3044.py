# 정수 2개 입력받아 차 계산하기
# calculate difference between two integers
# 정수 2개(a, b)를 입력받아 a에서 b를 뺀 차를 출력해 보자.
import sys
a, b = map(int, sys.stdin.readline().split())
sys.stdout.write(str(a-b))