# 사칙연산 계산기(Four Rules Calculator)
# 두 정수를 입력받아 아래와 같이 출력
a, b = map(int, input().split())
print(a, '+', b, '=', a+b, sep='')
print(a, '-', b, '=', a-b, sep='')
print(a, '*', b, '=', a*b, sep='')
print(a, '/', b, '=', a//b, sep='')