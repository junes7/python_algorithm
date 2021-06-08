# 2차원 배열 빗금 채우기 3-1
# 입력이 n, m인 경우 n*m 크기의 
# 2차원 배열 빗금 채우기로 출력
n, m = map(int, input().split())
b = [[0] * m for i in range(n)]
t = 0
for i in range(0, n+m-1):
    for j in range(m):
        for k in range(n):
            if j+k == i:
                t += 1
                b[k][j] = t
for i in range(n):
    for j in range(m):
        print(b[i][j], end=' ')
    print()