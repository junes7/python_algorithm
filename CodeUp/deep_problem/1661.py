# 파싱(parsing) 2
# 이번에는 정수, 컴마(,), 공백, 세미콜론(;)이 입력된다. 컴마는 없애고,
# 공백은 무시하고, 세미콜론(;)은 줄을 바꾼다. 예를 들어 입력이
# 4,52,   600;  -5, 0인 경우,
# 4 52 600 
# -5 0 을 출력한다.
# 정수(음수 기호 -포함)와 컴마(,), 세미콜론(;)으로 이루어진 문자열이
# 입력된다.(최대길이 100글자) | 파싱한 결과를 출력한다.
# method 1
s = input()
for i in range(len(s)):
    if s[i] == ',':
        print(' ', end='')
    elif s[i] == ' ':
        continue
    elif s[i] == ';':
        print(' \n', end='')
    else:
        if i == len(s)-1:
            print(s[i], ' ', sep='')
        else:
            print(s[i], end='')