# 문자 1개 입력받아 다음 문자 출력하기
# print next character after input one character
# 문자 1개를 입력받아 그 다음 문자를 출력해보자. 알파벳 대문자 A의 다음
# 문자는 B이고, 숫자 "0"의 다음 문자는 "1" 이다.
# 문자 1개가 입력된다. | 그 다음 문자를 출력한다.
import sys
n = ord(sys.stdin.readline().rstrip())
sys.stdout.write(chr(n+1))