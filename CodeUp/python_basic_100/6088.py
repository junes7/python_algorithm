# 수 나열하기 1
# 등차 수열(arithmetic progression/sequence)
# 시작 값 a, 등차 d, 몇 번째 나타내는 정수 n
# method 1
a, d, n = input().split()
a = int(a)
d = int(d)
n = int(n)
s = a
for i in range(1, n):
    s += d
print(s)