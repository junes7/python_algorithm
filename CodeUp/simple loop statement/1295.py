# 알파벳 대소문자 변환
# 주어지는 문장의 대문자를 소문자로, 소문자를 대문자로
# 변경하는 프로그램을 작성하라. | 공백없는 문장 입력
# method 1
s = list(input())
for i in range(len(s)):
    n = ord(s[i])
    if 65 <= n and n <= 90:
        s[i] = chr(n + 32)
    elif 97 <= n and n <= 122:
        s[i] = chr(n - 32)
    else:
        continue
str = ''.join(s)
print(str)