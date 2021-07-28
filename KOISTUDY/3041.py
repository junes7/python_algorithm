# 정수 입력받아 유니코드 문자로 변환하기
# convert integer to unicode character
# 10진 정수 1개가 입력된다. (32 ~ 126)
# 유니코드 문자를 출력한다.
import sys
input = sys.stdin.readline
n = int(input())
sys.stdout.write(chr(n))