# 함수로 최소공배수 리턴하기
# return Least Common Multiple(LCM) through function
# int 형 자연수 두 개 입력받아 최소공배수(LCM)를 출력하시오.
a, b = map(int, input().split())
# 유클리오 호제법 이용
def gcd(m, n):
    if m < n:
        t = m
        m = n
        n = t
    while(n):
        m, n = n, m%n
    return m
def lcm(p, q):
    return p * q // gcd(p, q)
print('%ld' % lcm(a, b))