# 1부터 n까지 중 짝수의 합 구하기
# method 1
n = int(input())
s = 0
for i in range(1, n+1):
    if i % 2 == 0:
        s += i
print(s)