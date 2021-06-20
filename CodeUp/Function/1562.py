# 함수로 두 정수의 작은 값 리턴하기
# return smaller value of two integers through function
# int형 정수 두 개를 입력 받아 그 중 작은 값을 출력하시오.
# method 1
n, m = map(int, input().split())
def min(a, b):
    return a if a <= b else b
print('%d' % min(n, m))