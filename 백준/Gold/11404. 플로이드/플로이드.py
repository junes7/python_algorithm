N = int(input())
M = int(input())
INF = float("INF")
arr = [[INF] * (N + 1) for _ in range(N + 1)]
for i in range(N + 1):
    arr[i][i] = 0
for _ in range(M):
    a, b, c = map(int, input().split())
    arr[a][b] = min(arr[a][b], c)
for k in range(1, N + 1):
    for i in range(1, N + 1):
        for j in range(1, N + 1):
            arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j])
for row in arr[1:]:
    for cell in row[1:]:
        print(0 if cell == INF else cell, end = " ")
    print()