# n개의 수 중 5의 배수의 합
# 개수 n이 주어지고, 그 다음 줄에 무작위로 n개의
# 자연수가 입력되고, 그 중 5의 배수만 골라 합 출력
# method 1
n = int(input())
a = list(map(int, input().split()))
s = 0
for i in range (n):
    if a[i] % 5 == 0:
        s += a[i]
print(s)