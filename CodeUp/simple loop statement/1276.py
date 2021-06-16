# 팩토리얼 계산
# n! = n * (n-1) * (n-2) * ... * 2 * 1
n = int(input())
if n == 0:
    print(1)
else:
    m = 1
    for i in range(1, n+1):
        m *= i 
    print(m)