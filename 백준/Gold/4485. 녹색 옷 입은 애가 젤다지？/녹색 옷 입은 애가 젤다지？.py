import sys
input=lambda:sys.stdin.readline().rstrip()
from heapq import heappop, heappush
INF = float("INF")
dx = (0, 0, -1, 1)
dy = (-1, 1, 0, 0)
def dijkstra(arr):
    dist = [[INF] * N for _ in range(N)]
    q = [(0, 0)]
    dist[0][0] = arr[0][0]
    while q:
        x, y = heappop(q)
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if not (0 <= ny < N and 0 <= nx < N):
                continue
            distance = dist[y][x] + arr[ny][nx]
            if distance < dist[ny][nx]:
                dist[ny][nx] = distance
                heappush(q, (nx, ny))
    return dist[N - 1][N - 1]
cnt = 1
N = 0
while True:
    N = int(input())
    if N == 0:
        break
    arr = []
    for i in range(N):
        row = list(map(int, input().split()))
        arr.append(row)
    ans = dijkstra(arr)
    print(f'Problem {cnt}: {ans}')
    cnt += 1