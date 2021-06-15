# n개의 수의 합
# 수의 개수 n이 주어지고, 그 다음 줄에 무작위로
# n개의 정수가 입력된다. n개의 수의 합을 출력하시오.
# method 1
n = int(input())
a = list(map(int, input().split()))
s = 0
for i in range(n):
    s += a[i]
print(s)