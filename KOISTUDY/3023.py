# 문자 1개 입력받아 그대로 출력하기(print one string)
# 문자(character)는 0~9, a~z, A~Z, !, @, #, {, [, <, ... 등 과 같이
# 길이가 1인 기호라고 할 수 있다. 어떤 변수에 문자 1개를 저장한 후 그 변수에
# 저장되어 있는 문자를 그대로 출력해보자.
import sys
input = sys.stdin.readline
c = input()
print(c)