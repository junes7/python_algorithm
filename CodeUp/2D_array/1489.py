# 2차원 배열 달팽이 채우기 4-5
# filling 2D array with snail pattern
# 다음과 같은 n*m 배열 구조를 출력해보자.
# 입력이 n m인 경우 2차원 배열을 출력해보자.
n, m = map(int, input().split())
a = [[0] * m for i in range(n)]
k, c = n*m+1, -1
f = n
i = n-1
j = m
d, e = m, n
while True:
    # 행 고정, 열 감소 또는 증가
    for b in range(1, d+1):
        if k <= 1:
            break
        k -= 1
        j += c
        a[i][j] = k
    f -= 1
    if f < 1:
        break
    # 열 고정, 행 감소 또는 증가
    for b in range(1, e):
        if k <= 1:
            break
        k -= 1
        i += c
        a[i][j] = k
    c *= -1
    d -= 1
    e -= 1
for x in range(n):
    for y in range(m):
        print(a[x][y], end=' ')
    print()