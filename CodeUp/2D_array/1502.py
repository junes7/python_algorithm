# 2 차원 배열 채우기 2
# 크기가 n인 2차원 배열 출력
# method 1
n = int(input())
b = [[0]*n for i in range(n)]
for i in range(n):
    t = i + 1
    for j in range(n):
        b[i][j] = t
        if j == n-1:
            break
        t += n
for i in range(n):
    for j in range(n):
        print(b[i][j], end=' ')
    print()