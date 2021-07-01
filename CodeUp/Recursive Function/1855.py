# 재귀로 n번째 피보나치 수 리턴하기
# 한 정수 n을 입력받아 n번째 피보나치 수를 출력하시오.
# method 1 with memoization
n = int(input())
def fibo(n):
    if n == 1 or n == 2:
        return 1
    else:
        return fibo(n-1) + fibo(n-2)
print(fibo(n))