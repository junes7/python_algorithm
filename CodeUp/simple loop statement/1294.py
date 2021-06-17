# 시저의 암호 2
# 대현이는 씨저의 암호 방식을 이용해 문장을 바꾸려고 한다. never trust
# brutus를 씨저의 암호로 바꾸면 qhyhu wuxvw euxwxv 이다. 그런데 집중력이
# 약한 대현이난 하나 하나 찾아서 암호로 바꾸는데 어려움을 격고 있다.우리가
# 대현이를 위해 평문을 씨저의 암호문으로 바꾸는 프로그램을 만들어 주자.
# method 1
s = list(input())
for i in range(len(s)):
    n = ord(s[i])
    if 97 <= n and n <= 119:
        s[i] = chr(n + 3)
    elif 120 <= n and n <= 122:
        s[i] = chr(n - 23)
    else:
        continue
str = ''.join(s)
print(str)