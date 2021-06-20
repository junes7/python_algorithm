# 함수로 세 정수 중 중간 값 리턴하기
# return mid value of three integers through function
# int형 정수 세 개를 입력 받아 중간 값을 출력하시오.
# method 1
n, m, x = map(int, input().split())
def mid(a, b, c):
    if b <= a and a <= c or b >= a and a >= c:
        return a
    elif c <= b and b <= a or c >= b and b >= a:
        return b 
    else:
        return c
print('%d' % mid(n, m, x))