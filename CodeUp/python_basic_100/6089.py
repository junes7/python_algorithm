# 수 나열하기 2
# 등비 수열(geometric progression/sequence)
# 시작 값 a, 등비 r, 몇 번째 나타내는 정수 n
# method 1
a, r, n = input().split()
a = int(a)
r = int(r)
n = int(n)
m = a
for i in range(1, n):
    m *= r
print(m)