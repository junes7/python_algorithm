# 012ABC
# ‘0’, ‘1’, ‘2’, ‘A’, ‘B’,‘C’로만 이루어진 길이 50이하의 문자열이 입력.
# ‘0’, ‘1’, ‘2’는 오른쪽에 추가되고, ‘A’는 왼쪽 문자를 지우고, ‘B’는 왼쪽
# 두 글자를 지우고, ‘C’는 문자열 전체를 지운다. 지울 글자가 없으면 아무런
# 변화가 없다. 최종 결과 문자열을 출력하여라. (단, 출력할 결과가 없는 경우는
# 주어지지 않는다.)
# ‘0’, ‘1’, ‘2’, ‘A’, ‘B’, ‘C’로만 이루어진 길이 50이하의 문자열이 입력.
# ‘0’, ‘1’, ‘2’는 오른쪽에 추가되고, ‘A’는 왼쪽 문자를 지우고, ‘B’는 두
# 글자를 지우고, ‘C’는 전체를 지운다고 하였을 때 최종 결과 문자열을 출력.
# 011B1C11A122B11A -> 111
# method 1
s = input()
for i in range(len(s)):
    t = 0
    if s[i] == 'A':
        s = s[t:i-1] + s[i+1:]
    elif s[i] == 'B':
        s = s[t:i-2] + s[i+1:]
    elif s[i] == 'C':
        s = s[i+1:]
    print(s, i)
print(s)