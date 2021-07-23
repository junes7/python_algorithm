# 피보나치 수열(Hell) (fibonacci sequence)
# 광곽이는 수학 시간에 피보나치 수열을 배웠다. 우리의 천재 광곽이는 수업시간에
# 배운 것을 아주 잘 활용하는 아이여서, 곧바로 N번째 피보나치 수를 구하는 프로그램을
# 작성하기로 했다. 그런데, 작은 수에 대해서는 잘 구할 수 있었지만, 큰 수에 대해서는
# 그러지 못했다. 우리가 천재 광곽이를 도와주어 광곽이보다 더 뛰어남을 입증하자.
# 자연수 N이 입력된다. (N은 100,000,000,000보다 같거나 작다.)
# N 번째 피보나치 수를 출력하되, 1,000,000,007로 나눈 나머지를 출력한다.
# method 1 with memoization
import sys
sys.setrecursionlimit(1000000)
n = int(input())
d = [0] * 1000001
def fibonacci(n):
    if n <= 2:
        d[n] = 1
        return d[n]
    else:
        if d[n] != 0:
            return d[n]
        else:
            d[n] = (fibonacci(n-1) + fibonacci(n-2)) % 1000000007
            return d[n]
print(fibonacci(n))