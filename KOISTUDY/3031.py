# 단어 1개 입력받아 나누어 출력하기
# (print one word after split it)
# 알파벳과 숫자로 이루어진 단어 1개가 입력된다. 입력받은 단어의 각 문자를
# 한 줄에 한 문자씩 여러 줄로 줄을 바꿔 출력해 보자.
import sys
input = sys.stdin.readline
output = sys.stdout.write
s = input()
t = s[0] + '\n' + s[1] + '\n' + s[2] + '\n' + s[3] + '\n' + s[4]
output(t)
# print(s[0], s[1], s[2], s[3], s[4], sep='\n')
# for i in range(len(s)):
#     print(s[i])