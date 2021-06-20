# 함수로 n! 리턴하기 (return n factorial through function)
# int 형 정수 한 개를 입력 받아 n!를 계산해 출력하시오.
# method 1
x = int(input())
def f(n):
    if n == 0:
        m = 1
    else:
        m = 1
        for i in range(1, n+1):
            m *= i
    return m
print('%ld' % f(x))