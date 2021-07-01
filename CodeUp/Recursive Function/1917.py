# n의 k승 구하기(get n to the k)
# 어떤 정수 n과 k가 입력되면, n^k의 값을 출력하시오.
# 분할 정복 알고리즘 이용할 것!
# 공백을 기준으로 int범위 정수 n과 k가 주어진다. (n은 0이 아닌 정수, k>=0인
# 정수) | n^k의 결과를 출력한다.(결과 값은 long long int값 범위이다.)
# 거듭제곱(Exponentiation)
# method 1 with memoization
import sys
n, k = map(int, sys.stdin.readline().strip().split())
d = {}
def exp(n, k):
        if n== 1 or k == 0:
            d[(n, k)] = 1
        elif n == -1:
            if k % 2 == 0:
                d[(n, k)] = -n
            else:
                d[(n, k)] = n
        elif k < 2:
            d[(n, k)] = n
        else:
            if k % 2 == 0:
                d[(n, k)] = exp(n, k//2) * exp(n, k//2)
            else:
                d[(n, k)] = exp(n, (k-1)//2) * exp(n, (k-1)//2) * n
        return d[(n, k)]
print(exp(n, k))