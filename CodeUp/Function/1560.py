# 함수로 두 정수의 차이 값 리턴하기
# return difference value of two integers through function
# long long int 형 정수 두 개를 입력 받아 두 수의 차이값을 출력
# method 1
n, m = map(int, input().split())
def f(a, b):
    return a - b if a > b else b - a
print('%ld' % f(n, m))