# 실수 1개 입력받아 그대로 출력하기(print one real number)
# 숫자(0~9)와 소숫점(.)을 사용해 표현한 수를 실수(real number)라고 한다.
# 변수에 실숫값을 저장한 후 변수에 저장되어 있는 값을 그대로 출력해보자.
import sys
input = sys.stdin.readline
f = float(input())
print(f)