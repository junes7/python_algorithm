# 수 나열하기 3
# 어떤 규칙에 따라 수를 순서대로 나열한 수열
# 시작 값 a, 곱할 값 m, 더할 값 d,
# 몇 번째 나타내는 정수 n
# method 1
a, m, d, n = input().split()
a = int(a)
m = int(m)
d = int(d)
n = int(n)
s = a
for i in range(1, n):
    s = s * m + d
print(s)