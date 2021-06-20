# 함수로 거듭제곱 리턴하기
# int형 정수 두 개를 입력 받아 거듭 제곱(exponentiation, a^n)결과 출력
# method 1
a, n = map(int, input().split())
def pow(x, y):
    return x ** y
print('%ld' % pow(a, n))