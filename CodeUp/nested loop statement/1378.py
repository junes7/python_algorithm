# 등차 수열의 합(Sum of arithmetic series)
# 동렬이는 수학 문제를 풀다 다음과 같은 수열을 보았다. 임의의 정수 n이
# 주어질 때 이 수열의 합 S_n을 구하는 프로그램을 작성하시오.
# method 1
n = int(input())
s = 0
for i in range(1, n+1):
    for j in range(1, i+1):
        s += j
print(s)