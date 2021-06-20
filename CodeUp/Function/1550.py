# 함수의 양의 제곱근의 정수 부분만 리턴하기
# (return the integer part of the positive square root only
# through function)
# 음이 아닌 long long int형 정수 n이 입력된다.
# 입력된 정수의 양의 제곱근의 정수부분만 출력한다.
# method 1
d = int(input())
def sqrt(n):
    return n ** (1/2)
print('%d' % sqrt(d))