# 10진 정수 입력받아 16진수로 출력하기 2
# print decimal to hexadecimal number
# 10진 정수를 입력받아 대문자 16진수(hexadecimal)로 바꿔 출력해 보자.
import sys
input = sys.stdin.readline
n = format(int(input()), 'X')
sys.stdout.write(str(n))