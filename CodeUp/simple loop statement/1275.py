# k 제곱 구하기
# 어떤 수 n과 k가 있고, 관계는 n의 k제곱 관계이다.
# method 1
# n, k = map(int, input().split())
# print(n ** k)
# method 2
n, k = map(int, input().split())
if k == 0:
    print(1)
elif k == 1:
    print(n)
else:
    s = n
    for i in range(2, k+1):
        m = s * n
        s = m
    print(m)