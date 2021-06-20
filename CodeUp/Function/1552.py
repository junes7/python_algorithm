# 함수로 소수 부분만 리턴하기 1(return decimal point only through function)
# double 형 실수(x)가 입력
# 소수 부분만 출력한다.
# method 1
x = float(input())
def f(n):
    d = int(n)
    return n - d
print('%.14lf' % f(x))