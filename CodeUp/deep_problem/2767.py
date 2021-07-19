# K-피보나치 수열 (Small)(k-Fibonacci sequence)
# 피보나치 수열은 우리가 잘 알고 있듯이, 앞의 두 항을 더해서 새로운 수를
# 구하는 수열이다. 이제 k-피보나치 수열을 정의하려고 한다.
# k-피보나치 수열은 앞의 k개의 항을 더해서 나온 수를 나열한 수열이다.
# (즉, 우리가 알고있는 피보나치 수열은 2-피보나치 수열인것이다.)
# 예를 들어, k=4이고 초항이 다음과 같이 4개 주어졌다고 하자.
# (반드시 k개의 초항이 입력된다.) 1 2 3 5
# 그럼 5번째 항은 11, 6번째 항은 21 이 된다.
# 이런 식으로 k-피보나치 수열의 n번째 항을 출력하는 프로그램을 작성하시오.
# 첫째 줄에 k와 n이 입력된다. (2<=k<=10, k<=n<=20)
# 두번째 줄에 k개의 초항이 공백으로 구분되어 입력된다.(초항의 값의 범위는
# 1~10이다.) | k-피보나치 수열의 n번째 항을 출력한다.
# method 1 with memoization
k, n = map(int, input().split())
d = [0] * 30
d[1:k+1] = list(map(int, input().split()))
def kFiboSequence(k, n):
    if d[n] != 0:
        return d[n]
    else:
        for i in range(1, k+1):
            d[n] += kFiboSequence(k, n-i)
        return d[n]
print(kFiboSequence(k, n))