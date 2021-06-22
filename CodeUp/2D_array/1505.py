# 2차원 배열 채우기 3(달팽이 배열)
# filling 2D array(snail pattern array)
# n이 입력되면 크기가 n인 다음과 같은 2차원 배열을 출력하시오.
n = int(input())
a = [[0] * n for i in range(n)]
k, c = 0, 1
f = n
i = 0
j = -1
while True:
    # 행 고정, 열 증가 또는 감소
    for b in range(1, f+1):
        if k >= n*n:
            break
        k += 1
        j += c
        a[i][j] = k
    f -= 1
    if f < 1:
        break
    # 열 고정, 행 증가 또는 감소
    for b in range(1, f+1):
        if k >= n*n:
            break
        k += 1
        i += c
        a[i][j] = k
    c *= -1
for x in range(n):
    for y in range(n):
        print(a[x][y], end=' ')
    print()