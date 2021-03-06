# 올바른 괄호 2(correct parenthesis)
# 괄호 문자열이 주어지면 올바른 괄호 문자열인지 판단하는 프로그램을 작성하시오.
# 올바른 괄호 문자열이란 여는 괄호와 닫는 괄호의 짝이 맞고, 포함 관계에 문제가
# 없는 문자열을 말한다. 예를 들어, )()( 인 경우 여는 괄호와 닫는 괄호의 짝이
# 맞지 않으므로 올바른 괄호 문자열이 아니다. (()())인 경우 괄호의 짝이 맞고
# 포함 관계가 맞으므로 올바른 괄호 문자열이다.
# '('와 ')'로 이루어진 50,000글자 이하의 괄호 문자열이 입력된다.
# 문자열 중간에 공백이나 다른 문자는 포함되지 않는다.
# 올바른 괄호 문자열이면 'good', 아니면 'bad'를 출력한다.
# ))()(( -> bad
# method 1
s = input()
d = []
r = ''
for i in s:
    if i == '(':
        d.append(i)
    elif i == ')':
        if len(d) == 0:
            r = 'bad'
        else:
            d.pop()
if r != '':
    print(r)
else:
    if len(d) != 0:
        print('bad')
    else:
        print('good')