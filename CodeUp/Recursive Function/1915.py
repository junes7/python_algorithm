# (재귀함수) 피보나치 수열(fibonacci sequence)
# 피보나치 수열이란 앞의 두 수를 더하여 나오는 수열이다. 첫 번째 수와 두 번째
# 수는 모두 1이고, 세 번째 수부터는 이전의 두 수를 더하여 나타낸다. 피보나치
# 수열을 나열해 보면 다음과 같다. 1, 1, 2, 3, 5, 8, 13 ...
# 자연수 N을 입력받아 N번째 피보나치 수를 출력하는 프로그램을 작성하시오.
# 자연수 N이 입력(20보다 같거나 작다) | N번째 피보나치 수를 출력한다.
# method 1 with memoization
n = int(input())
d = [0] * 21
def fibo(x):
    if x == 1 or x == 2:
        return 1
    if d[x] != 0:
        return d[x]
    else:
        d[x] = fibo(x-1) + fibo(x-2)
        return d[x]
print(fibo(n))