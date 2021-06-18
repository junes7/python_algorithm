# t를 찾아라 (find character t)
# 어떤 문자열이 있을 때 문자 t의 위치를 모두 찾아 출력하시오. 소문자 t의
# 위치를 공백으로 분리하여 모두 출력하시오.
# method 1
s = input()
for i in range(len(s)):
    if s[i] == 't':
        print(i+1, end=' ')