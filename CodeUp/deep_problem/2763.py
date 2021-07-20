# 서로 소(coprime)
# 두 양의 정수를 입력 받아 두 수가 서로 소이면 "coprime"을 출력하고,
# 아니면 "no"를 출력하시오. 서로 소란, 두 수의 공약수가 1이외에는
# 존재하지 않는 것을 말한다.
# 두 양의 정수 a, b가 입력된다.(2<= a, b <=100,000)
# 서로 소이면 coprime 을 출력하고, 아니면 no 를 출력한다.
# method 1
a, b = map(int, input().split())
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)
g = gcd(a, b)
if g == 1:
    print('coprime')
else:
    print('no')