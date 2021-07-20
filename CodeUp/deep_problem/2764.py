# 이름표 만들기(create nameplate)
# 프로그램 만들기를 좋아하는 Key.West 동아리 회장 CSH는 창곽에 입학한
# 학생들을 위해 이름표를 만들고자 한다. 이름을 입력하면 다음 모양과 같은
# 이름표가 출력되도록 하자. 입력이 ChangWon인 경우, 다음과 같이 출력한다.
# +-+-+-+-+-+-+-+-+
# |C|h|a|n|g|W|o|n|
# +-+-+-+-+-+-+-+-+
# 입력이 한 글자 P인 경우, 다음과 같이 출력한다.
# +-+
# |P|
# +-+
# 20글자 미만의 문자열이 입력된다.(문자는 알파벳 대소문자만 구성되어 있다.)
# 이름표 양식에 맞추어 출력한다.
# method 1
s = input()
l = len(s) * 2 + 1
t = 0
for i in range(l):
    if i % 2 == 0:
        print('+', end='')
    else:
        print('-', end='')
print()
for i in range(l):
    if i % 2 == 0:
        print('|', end='')
    else:
        print(s[t], end='')
        t += 1
print()
for i in range(l):
    if i % 2 == 0:
        print('+', end='')
    else:
        print('-', end='')