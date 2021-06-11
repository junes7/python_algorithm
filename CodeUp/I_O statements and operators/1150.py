# 세 수 중 가장 작은 수
# the smallest number of three integers
a, b, c = map(int, input().split())
print((a if a < b else b) if ((a if a < b else b) < c) else c)