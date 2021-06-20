# 함수로 n까지의 합 리턴하기
# return sum until n through function
# int형 정수 한 개를 입력받아 1부터 n까지의 정수합을 계산해 출력하시오.
# method 1
x = int(input())
def f(n):
    s = 0
    for i in range(1, n+1):
        s += i
    return s
print('%ld' % f(x))