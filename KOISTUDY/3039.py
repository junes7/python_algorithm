# 16진 정수 입력받아 8진수로 출력하기
# print hexadecimal to octal number
# 16진 정수를 입력받아 8진수(octal)로 바꿔 출력해 보자.
# method: first convert hex to dec, and convert dec to oct
# 16에서 10진수로: int(num, 16) | 10에서 8진수로: oct(num) 
import sys
input = sys.stdin.readline
n = oct(int(input(), 16))
sys.stdout.write(str(n[2:]))