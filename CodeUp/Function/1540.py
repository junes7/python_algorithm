# 함수로 zero 또는 non zero 출력하기 (print zero or non zero through function)
# 0이 입력되면 zero, 그 외에는 non zero를 출력한다.
# method 1
d = int(input())
def f(n):
    print('zero' if n == 0 else 'non zero')
f(d)