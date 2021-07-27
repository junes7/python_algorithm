# 실수 1개 입력받아 3번 출력하기(print one real number three times)
# 실수(real number) 1개를 입력받아 줄을 바꿔 3번 출력해 보자.
import sys
input = sys.stdin.readline
f = float(input())
print(f, f, f, sep='\n')