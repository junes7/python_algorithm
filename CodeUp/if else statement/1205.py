# 최댓값(maximum)
# 두 실수 a, b가 입력되면 그 두수를 더하거나 빼거나
# 곱하거나 나누거나 제곰을 해서 가장 큰 수를 출력.
a, b = map(float, input().split())
maxn = 0
# 더하기, 곱하기
if (a * b) < (a + b):
    maxn = a + b
if (a * b) >= (a + b):
    maxn = a * b
# 빼기
if maxn < (a - b):
    maxn = a - b
if maxn < (b - a):
    maxn = b - a
# 나누기
if a >= 0 and maxn < (a / b):
    maxn = a / b
if b >= 0 and maxn < (b / a):
    maxn = b / a
# 제곱
if a != 0 and maxn < a ** b:
    maxn = a ** b
if b != 0 and maxn < b ** a:
    maxn = b ** a
print(format(maxn, '.6f'))