# 2차원 배열 빗금 채우기 3-1
# filling 2D array with diagonal pattern
# 입력이 n, m인 경우 n*m 크기의 
# 2차원 배열 빗금 채우기로 출력
# method 1
# n, m = map(int, input().split())
# b = [[0] * m for i in range(n)]
# t = 0
# for i in range(n+m-1):
#     for j in range(m):
#         for k in range(n):
#             if j+k == i:
#                 t += 1
#                 b[k][j] = t
# for i in range(n):
#     for j in range(m):
#         print(b[i][j], end=' ')
#     print()
# method 2
n, m = map(int, input().split())
a = [[0] * m for i in range(n)]
l = 0
for i in range(n+m-1):
    for j in range(m):
        k = i - j
        if k < 0 or k > n-1:
            continue
        else:
            l += 1
            a[k][j] = l
for x in range(n):
    for y in range(m):
        print(a[x][y], end=' ')
    print()