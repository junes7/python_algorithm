# 3n+1 우박수(Collatz Conjecture 콜라츠의 추측)
# 컴퓨터 과학에서는 다양한 알고리즘을 이용한 여러 문제들이 있다. 그 중
# 3n+1이라고 하는 문제에 대해서 알아보자.
# 1. 어떤 자연수 n이 입력되면, 2. n이 홀수이면 3n + 1을 하고,
# 3. n이 짝수이면 n/2를 한다. 4. n이 1이 될때까지 2, 3 과정을 반복한다.
# 만약 n이 22라면 위 알고리즘은 다음과 같은 값을 출력한다.
# 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
# 어떤 수 n에 대해서 나타나는 수열의 길이를 사이클 길이라고 한다.
# 위와 같이 입력이 22인 경우 총 16개의 길이를 가지는 수열을 입력한다.
# 따라서 22의 사이클 길이는 16이다.
# 이 알고리즘은 우리가 다루는 대부분의 수의 범위 내에서는 일정한 출력 후에
# 종료되지만 아직 모든 입력값에 대해서 성립함이 증명되지는 않았다.
# 이번 문제에서는 입력받은 n의 사이클 길이를 출력하는 것이 목적이다.
# method 1
n = int(input())
def collaCon(n, cnt):
    if n == 1:
        cnt += 1
        return cnt
    else:
        if n % 2 == 1:
            n = n * 3 + 1
        else:
            n //= 2
        cnt += 1
        return collaCon(n, cnt)
print(collaCon(n, 0))