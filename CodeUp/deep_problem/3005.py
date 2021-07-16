# 최소공배수(LCM Least Common Multiple)
# n개의 수의 최소공배수를 구하시오.
# 첫째 줄에 n이 입력된다. (1 <= n <= 100)
# 둘째 줄에 n개의 정수가 입력된다. (각각의 값은 1~12의 장수로 입력됨)
# 최소공배수를 출력한다.
# method 1
n = int(input())
d = list(map(int, input().split()))
def gcd(a, b):
    if a < b:
        t = a
        a = b
        b = t
    if b == 0:
        return a
    else:
        return gcd(b, a % b)
if n == 1:
    print(d[0])
else:
    l = (d[0] * d[1]) // gcd(d[0], d[1])
    if n <= 2:
        print(l)
    else:
        for i in range(2, n):
            l = (l * d[i]) // gcd(l, d[i])
        print(l)