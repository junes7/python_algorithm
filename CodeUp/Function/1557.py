# 함수로 n의 약수의 개수 리턴하기
# return number of divisors of n through function
# int형 자연수 한 개 입력 받아 약수의 개수를 출력하시오. 
# method 1
x = int(input())
def f(n):
    cnt = 1
    for i in range(2, n+1):
        if n % i == 0:
            cnt += 1
    return cnt
print('%d' % f(x))