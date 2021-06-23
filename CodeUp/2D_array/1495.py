# 2차원 차이 배열 만들기 5-4
# create 2D difference array
# 크기가 n*m인 2차원 배열 d[][]에 대해 k개의 구간[(x1, y1), (x2, y2)]과
# u를 입력 받아 d[x1][y1]=d[x1][y1]+u; d[x2+1][y2+1]=d[x2+1][y2+1]+u;
# d[x1][y2+1]=d[x1][y2+1]-u; d[x2+1]d[y1]=d[x2+1]d[y1]-u;를 수행한 후,
# 누적 합을 만들어 출력해보자.
# 첫째 줄에 배열의 크기 n, m과 구간의 개수 k가 공백을 두고 입력된다.
# 둘째 줄부터 k개의 데이터가 공백을 두고 입력된다.
n, m, k = map(int, input().split())
d = [[0] * 1010 for i in range(1010)]
for i in range(k):
    x1, y1, x2, y2, u = map(int, input().split())
    d[x1][y1] += u
    d[x2+1][y2+1] += u
    d[x1][y2+1] -= u
    d[x2+1][y1] -= u
for x in range(n):
    for y in range(m):
        print(d[x][y], end=' ')
    print()
a = [0] * m
for x in range(n):
    sum = 0
    for y in range(m):
        sum += d[x][y]
        d[x][y] = sum
for y in range(m):
    sum = 0
    for x in range(n):
        sum += d[x][y]
        d[x][y] = sum
print()
for x in range(n):
    for y in range(m):
        print(d[x][y], end=' ')
    print()