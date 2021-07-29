# 실수 2개 입력받아 곱 계산히기
# calculate multiplication of two real numbers
# 실수 2개(f1, f2)를 입력받아 두 수의 곱을 출력해 보자.
import sys
f1, f2 = map(float, sys.stdin.readline().split())
sys.stdout.write(str(f1 * f2))