# 최댓값 구하기(get maximum value)
n=list(map(int, input().split()))
# method 1
print(max(n))
# method 2
print(sorted(n)[-1])