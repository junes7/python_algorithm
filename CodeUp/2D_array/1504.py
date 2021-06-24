# 지그재그 배열 2
# filling 2D array with zigzag pattern
# 하나의 정수 N을 입력받아 다음과 같이 지그재그 패턴으로 출력하시오.
# 한개의 정수(n)가 입력된다.
# N*N 배열을 수직으로 채워서 출력.(숫자와 숫자사이는 공백으로 구분)
# method 1
n = int(input())
d = [[0] * n for i in range(n)]
t = 0
for j in range(n):
    if j % 2 == 0:
        for i in range(n):
            t += 1
            d[i][j] = t
    else:
        for i in range(n-1, -1, -1):
            t += 1
            d[i][j] = t
for x in range(n):
    for y in range(n):
        print(d[x][y], end=' ')
    print()