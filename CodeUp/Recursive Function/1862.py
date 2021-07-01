# 재귀로 n번째 피보나치 수 출력하기
# n번째 피보나치 수를 1000000007(10억7)로 나눈 나머지를 출력하시오.
# method 1
n = int(input())
d = [0] * 1000
def fibo(n):
    if n <= 2:
        d[n] = 1
        return d[n]
    else:
        if d[n] != 0:
            return d[n]
        else:
            d[n] = (fibo(n-1) + fibo(n-2))
            return d[n]
print(fibo(n) % 1000000007)