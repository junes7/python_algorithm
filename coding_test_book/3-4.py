# 2중 반복문 구조를 이용하는 답안 예시
n, m = map(int, input().split())
result = 0
for i in range(n):
    data = list(map(int, input().split()))
    min_val = 1000
    for a in data:
        min_val = min(min_val, a)
    result = max(result, min_val)
print(result)