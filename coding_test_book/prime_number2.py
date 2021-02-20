# Eratosthenes' sieve(에라토스테네스의 체)
import math
n = int(input('정수를 입력해주세요:'))
array = [True for i in range(n+1)]
# 에라토스테네스의 체 알고리즘
for i in range(2, int(math.sqrt(n))+1):
    if array[i] == True:
        j = 2
        while i * j <= n:
            array[i * j] = False
            j += 1
# 소수 출력하기
for i in range(2, n+1):
    if array[i] == True:
        print(i, end=' ')
