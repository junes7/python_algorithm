# 1부터 n까지의 합 구하기
# 정수 n이 입력되면 1부터 n까지의 합을 구하시오.
# method 1
n = int(input())
s = 0
for i in range(1, n+1):
    s += i
print(s)
# method 2(수열의 합 이용)
# n = int(input())
# s = n*(n+1)//2
# print(s)