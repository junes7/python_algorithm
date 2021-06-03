# 짝수 합 구하기
# 정수(1 ~ 100) 1개를 입력받아 1부터 그 수까지
# 짝수의 합을 구해보자
# method 1
# n = int(input())
# s = 0
# for i in range(1, n+1):
#     if i % 2 == 0:
#         s += i
# print(s)
# method 2
n = int(input())
s = 0
i = 1
while i <= n:
    if i % 2 == 0:
        s += i
    i += 1
print(s)