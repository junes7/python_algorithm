# 2차원 배열 채우기 4(역달팽이 배열)
# filling 2D array(reverse snail pattern array)
# 평소 호기심이 많은 남호는 정보고 사이트에 있는 달팽이 배열 문제를
# 다르게 만들고 싶었다. 입력 예시와 출력 예시를 참고해 n(15보다 작은
# 홀수)을 입력 받아 역 달팽이 배열을 출력하는 프로그램을 작성하시오.
n = int(input())
a = [[0] * n for i in range(n)]
k, c = 0, 1
f = n
i = -1
j = 0
while True:
    # 열 고정, 행 증가 또는 감소
    for b in range(1, f+1):
        if k >= n*n:
            break
        k += 1
        i += c
        a[i][j] = k
    f -= 1
    if f < 1:
        break
    # 행 고정, 열 증가 또는 감소
    for b in range(1, f+1):
        if k >= n*n:
            break
        k += 1
        j += c
        a[i][j] = k
    c *= -1
for x in range(n):
    for y in range(n):
        print(a[x][y], end=' ')
    print()