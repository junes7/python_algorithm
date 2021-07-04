# 자릿수의 합 2
# n개의 자연수(k)가 한 줄에 하나씩 입력된다.
# 각 k에 대해 각 자릿수의 합이 한 자릿수가 될 때까지 각각 계산하여 하나씩
# 출력하시오.
# 첫째 줄에 자연수의 개수 n이 입력된다. 둘째 줄 ~ n+1째 줄에 자연수 k가
# 입력된다.
# n행에 걸쳐 각 k에 대한 자릿수를 계산하여 출력한다.
# method 1
import sys
n = int(sys.stdin.readline())
d = []
for i in range(n):
    d.append(int(sys.stdin.readline()))
for i in range(n):
    x = d[i]
    s, t = 0, 0
    while x > 0:
        s += x % 10
        x //= 10
    if s % 10 == s:
        print(s)
    else:
        while s > 0:
            t += s % 10
            s //= 10
        print(t)