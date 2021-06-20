# 함수로 최대공약수 리턴하기
# return Greatest Common Divisor(GCD) through function
# int형 자연수 두 개를 입력받아 최대공약수(GCD)를 출력하시오.
# method 1
a, b = map(int, input().split())
def gcd(m, n):
    if m == 1 or n == 1:
        return 1
    elif m == n:
        return n
    else:
        d = []
        if m < n:
            t = n
            n = m
            m = t
        for i in range(1, n+1):
            if n % i == 0:
                d.append(i)
        for i in range(len(d)-1, -1, -1):
            if m % d[i] == 0:
                return d[i]
print('%d' % gcd(a, b))