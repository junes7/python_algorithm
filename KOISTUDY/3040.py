# 영문자 1개 입력받아 10진수로 변환하기
# convert one alphabet to decimal
# 영문자 1개를 입력받아 10진수 유니코드(Unicode) 값을 출력해보자.
import sys
s = ord(sys.stdin.readline().rstrip())
sys.stdout.write(str(s))