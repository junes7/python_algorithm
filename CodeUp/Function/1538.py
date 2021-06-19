# 함수로 odd 또는 even 출력하기(print odd or even through function)
# 전달된 매개변수가 홀수이면 odd, 짝수이면 even을 출력하도록 함수 설계
# method 1
d = int(input())
def f(n):
    print('odd' if n % 2 == 1 else 'even')
f(d)