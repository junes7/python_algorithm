# 10진 정수 입력받아 16진수로 출력하기 1
# print decimal to hexadecimal number
# 10진 정수를 입력받아 소문자 16진수(hexadecimal)로 바꿔 출력해 보자.
# 10 -> 2 bin() | 10 -> 8 oct() | 10 -> 16 hex()
# method 1
import sys
input = sys.stdin.readline
n = int(input())
h = hex(n)
sys.stdout.write(str(h[2:]))