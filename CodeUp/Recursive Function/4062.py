# 최대공약수와 최소공배수(GCD and LCM)
# 주어진 여러 개의 자연수의 최대공약수와 최소공배수를 구하는 프로그램 작성.
# 최소공배수는 10억을 넘지 않는다.
# 첫 행에는 입력되는 수의 개수가 주어진다. (단, 입력되는 수는 2개 이상 10개
# 이내이다.) 둘째 행에는 첫 행에 입력된 수만큼 자연수가 빈 칸으로 구분되어
# 주어진다.
# 첫 행에는 주어진 수들의 GCD를 출력, 둘째 행에는 주어진 수들의 LCM을 출력
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
g = gcd(d[0], d[1])
l = d[0] * d[1] // g
if n <= 2:
    print(g, l, sep='\n')
else: 
    for i in range(2, n):
        g = gcd(d[i], g)
    for j in range(2, n):
        l = (l * d[j]) // gcd(l, d[j])
    print(g, l, sep='\n')