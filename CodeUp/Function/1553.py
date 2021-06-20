# 함수로 정수 올림한 값 리턴하기(return integer ceiling value through function)
# double 형 실수(x)가 입력
# 정수로 올림(ceiling)한 값을 출력한다.
# method 1
x = float(input())
def f(n):
    t = int(n)
    if t < n:
        return n+1
    else:
        return n
print('%ld' % f(x))