# 수열의 값 구하기(Find the value of the sequence)
# 영희는 수열을 어려워하고 있어 프로그래밍으로
# 해결하려고 한다. 시작 값(a), 곱할 값(b),
# 더할 값(c), 몇 번째 항인지 나타내는 정수(n)이
# 입력으로 주어질 때, 수열의 n번째 항의 값 구하시오.
# method 1
a, b, c, n = map(int, input().split())
for i in range(n):
    if i == 0:
        s = a
        continue
    else:
        s = a * b + c
        a = s
print(s)