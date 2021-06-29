# 최대공약수 구하기(Get Greatest Common Divisor)
# 두 정수 a, b를 입력받아서 a, b의 최대공약수를 출력하시오.
# method 1 with Euclidean Algorithm
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)
a, b = map(int, input().split())
print(gcd(a, b))