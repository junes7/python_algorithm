# 함수로 정수 내림한 값 리턴하기 (return integer flooring value through function)
# double형 실수 (x)가 입력된다.
# 정수로 내림(flooring)한 값을 출력한다.
# method 1
x = float(input())
def f(n):
    t = int(n)
    if n < t:
        return n-1
    else:
        return n
print('%ld' % f(x))