# 계산기 1
# 영민이는 프로그램을 이용하여 계산기를 만들려고 한다.
# 하지만 영민이는 프로그램을 얼마 배우지 않아 어려워하고
# 있다. 우리가 영민이를 위해 계산기 프로그램을 만들어주자.
# 연산식이 한줄로 입력되고 형식은 정수+정수 또는 정수-정수
# 또는 정수*정수 또는 정수/정수의 형태이다. | 결과 정수로
# 출력 나눗셈일 경우 실수로 출력하되 소수 둘째자리까지
# method 1
s = input()
for i in range(len(s)):
    if s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/':
        a = int(s[0:i])
        c = s[i:i+1]
        b = int(s[i+1:len(s)])
        break
if c == '+':
    print(a + b)
elif c == '-':
    print(a - b)
elif c == '*':
    print(a * b)
else:
    print(format(float(a / b), '.2f'))