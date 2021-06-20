# 함수로 두 정수의 합 리턴하기
# return sum of two integers through function
# int형 정수 두 개를 입력 받아 두 수를 합한 결과를 출력하시오.
# 두 개의 int형 정수(n, m)가 공백을 두고 입력 | 두 정수 합 출력
# method 1
n, m = map(int, input().split())
def f(a, b):
    return a + b
print('%ld' % f(n, m))