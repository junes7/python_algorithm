# 큰 수의 법칙
# 입력으로 주어지는 K는 항상 M보다 작거나 같다.

n, m, k = map(int, input().split())
data = list(map(int, input().split()))

data.sort()
result = 0
# first = data[n-1]
# second = data[n-2]

# while True:

# 좀 더 간단한 방법으로 하기
count = 0
first = data[n-1]
second = data[n-2]
count += int(m/(k+1)) * k
count += m % (k+1)
result += count * first
result += (m-count) * second
print(result)

