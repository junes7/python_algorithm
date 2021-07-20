# 약어 생성(create abbreviation)
# 사람 이름이 영어로 나열되면서 콤마(,)로 구분되어 있을 때, 약어를 자동으로
# 생성하는 프로그램을 만드시오. 사람 이름의 첫글자는 반드시 대문자로 입력.
# 예를 들어, Changwon,Science,High,School 이 입력되면 CSHS 를 출력한다.
# 입력은 한 줄로 이루어져 있고, 최대 100글자의 영어 알파벳 대문자, 소문자,
# 그리고 콤마(,)로만 이루어져 있다. 첫 글자는 반드시 대문자이고, 콤마 뒤에도
# 반드시 대문자이다. 그 외의 모든 문자는 소문자이다. 입력에 공백은 존재하지
# 않는다. | 약어를 출력한다.
#  method 1
d = list(input().split(','))
ab = []
for i in range(len(d)):
    ab.append(d[i][0])
for i in range(len(ab)):
    print(ab[i], end='')