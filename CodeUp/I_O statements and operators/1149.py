# 두 수 중 큰 수
# Larger number of two integers
a, b = map(int, input().split())
print(a if a > b else b)