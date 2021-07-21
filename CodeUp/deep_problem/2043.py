# 사운덱스 검색 알고리즘(soundex search algorithm)
# 2차 세계 대전 미국 군인들의 개인기록, 1880년에서 1930년에 이르기까지 인구
# 통계조사, 여러 가지 소프트웨어의 철자 확인기 엔진 속에서 사용되는 사운덱스
# 검색 알고리즘이라는 알고리즘이 있다. 이 알고리즘의 원리는 간단하다.
# [규칙 1] 단어의 첫 번째 글자를 저장하고, 첫 글자를 제외한 나머지 글자
# 중에서 a, e, h, i, o, u, w, y를 모두 제거한다.
# [규칙 2] 단어 안에 존재하는 글자들에 다음과 같은 번호를 부여한다.
# b, f, p, v --- 1
# c, g, j, k, q, s, x, z --- 2
# d, t --- 3
# l --- 4
# m, n --- 5
# r --- 6
# [규칙 3] 원래 단어에서 서로 인접하여 나타나는 글자는 맨 앞에 하나만 남기고,
# 나머지는 제거한다.
# [규칙 4] 최종적인 결과를 ‘글자, 숫자, 숫자, 숫자’의 형태로 맞추기 위하여
# 숫자가 세 개 이상이면 나머지를 생략하고, 세 개 미만이면 뒤에 0을 붙여서
# 형태를 맞춘다.
# 50자 이하의 첫 글자만 대문자이고, 나머지는 모두 소문자인 공백없는 단어가
# 입력된다. | 사운덱스 검색 알고리즘으로 변환시킨 결과를 출력한다.
# Codeup -> C310
# method 1
s = input()
re = s[0]
cnt = 0
for i in range(1, len(s)):
    if s[i] == 'a' or s[i] == 'e' or s[i] == 'h' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'w' or s[i] == 'y':
        continue
    elif s[i] == 'b' or s[i] == 'f' or s[i] == 'p' or s[i] == 'v':
        if s[i] == s[i-1]:
            continue
        else:
            re = re + '1'
            cnt += 1
    elif s[i] == 'c' or s[i] == 'g' or s[i] == 'j' or s[i] == 'k' or s[i] == 'q' or s[i] == 's' or s[i] == 'x' or s[i] == 'z':
        if s[i] == s[i-1]:
            continue
        else:
            re = re + '2'
            cnt += 1
    elif s[i] == 'd' or s[i] == 't':
        if s[i] == s[i-1]:
            continue
        else:
            re = re + '3'
            cnt += 1
    elif s[i] == 'l':
        if s[i] == s[i-1]:
            continue
        else:
            re = re + '4'
            cnt += 1
    elif s[i] == 'm' or s[i] == 'n':
        if s[i] == s[i-1]:
            continue
        else:
            re = re + '5'
            cnt += 1
    elif s[i] == 'r':
        if s[i] == s[i-1]:
            continue
        else:
            re = re + '6'
            cnt += 1
if cnt == 0:
    re = re + '000'
    print(re)
elif cnt == 1:
    re = re + '00'
    print(re)
elif cnt == 2:
    re = re + '0'
    print(re)
elif cnt == 3:
    print(re)
else:
    print(re[0:4])