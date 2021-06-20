# 함수로 두 정수의 큰 값 리턴하기
# return larger value of two integers through function
# int형 정수 두 개를 입력받아 그 중 큰 값을 출력하시오.
# method 1
n, m = map(int, input().split())
def max(a, b):
    return a if a >= b else b
print('%d' % max(n, m))