# 정수 1개 입력받아 부호 바꾸기
# change sign after input one integer
# 입력된 정수의 부호를 바꿔 출력해 보자.
# 정수 1개가 입력된다. | 부호를 바꿔 출력한다.
import sys
input = sys.stdin.readline
n = int(input())
sys.stdout.write(str(-n))