import sys
input=lambda:sys.stdin.readline().rstrip()
N, M = map(int, input().split())
arr = [[*map(int,input().split())] for _ in range(M)]
INF = float("INF")
def bellman_ford(start):
    dist = [INF] * (N+1)
    dist[start] = 0
    for i in range(1, N + 1):
        for s, e, d in arr:
            if dist[s] == INF:
                continue
            next_dist = dist[s] + d 
            if next_dist < dist[e]:
                dist[e] = next_dist 
                if i == N:
                    print(-1)
                    return
    for d in dist[2:]:
        print(d if d != INF else -1)
bellman_ford(1)