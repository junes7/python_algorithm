# n 이하의 소수의 합 구하기(Get the sum of prime numbers not more than n)
# 임의의 한 정수 n을 입력받어서, [1, n]범위에서 소수의 합을 출력하시오.
# 정수 n이 입력된다.(0<n<=10,000) | [1,n] 범위의 소수의 합을 출력한다.
# method 1
n = int(input())
def prime(n):
    s = 0
    if n == 1:
        return s
    else:
        for i in range(2, n+1):
            cnt = 0
            for j in range(1, i):
                if i % j == 0:
                    cnt += 1
            if cnt == 1:
                s += i
        return s
print(prime(n))