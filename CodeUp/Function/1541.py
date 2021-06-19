# 함수로 negative/zero/positive 출력하기 (print negative, zero, positive through function)
# 음수(-)가 입력되면 negative, 0이 입력되면 zero, 그 외에는 positive를
# 출력한다.
# method 1
d = int(input())
def f(n):
    if n < 0:
        print('negative')
    elif n == 0:
        print('zero')
    else:
        print('positive')
f(d)