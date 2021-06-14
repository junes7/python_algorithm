# 배수(multiple)
# b가 a의 배수이면 "a*x=b"를 출력, 
# b가 a의 배수이면 "b*x=a"를 출력,
# 배수관계가 아니면 "none"을 출력
# method 1
a, b = map(int, input().split())
if a <= b and b % a == 0:
    x = b // a
    print(a, '*', x, '=', b, sep='')
elif a >= b and a % b == 0:
    x = a // b
    print(b, '*', x, '=', a, sep='')
else:
    print('none')