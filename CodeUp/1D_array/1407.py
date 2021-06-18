# 문자열 출력하기 1(print string)
# 길이(글자수)가 100이하인 문자열을 입력받아 공백을 제거하고 출력하시오.
# method 1
s = input().split()
for i in range(len(s)):
    print(s[i], end='')