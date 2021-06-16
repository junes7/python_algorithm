# 알파벳 대소문자 변환
# 주어지는 문장의 대문자를 소문자로, 소문자를 대문자로
# 변경하는 프로그램을 작성하라. | 공백없는 문장 입력
# method 1
while True:
    s = input()
    if s == '\n':
        break
    elif s.isupper():
        print(s.lower())
    elif s.islower():
        print(s.upper())
    else:
        print(s)