# 분수 크기 비교(compare fraction sizes)
# 분수의 크기를 비교하는 프로그램을 작성하시오.
# 분수는 a / b, c / d 모양으로 주어진다.
# a / b > c / d 이면 > 를 출력,
# a / b = c / d 이면 = 를 출력,
# a / b < c / d 이면 < 를 출력.
# method 1
a, b, c, d = map(int, input().split())
f1, f2 = float(a / b), float(c / d)
if f1 > f2:
    print('>')
elif f1 == f2:
    print('=')
else:
    print('<')