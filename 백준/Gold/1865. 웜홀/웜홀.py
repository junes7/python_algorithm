import sys
input = lambda: sys.stdin.readline().rstrip()
mii = lambda : map(int, input().split())
INF = 1e9
def bellman_ford():
    time = [INF] * (N + 1)
    time[1] = 0
    for i in range(N):
        for s, e, t in arr:
            next_time = time[s] + t
            if next_time < time[e]:
                time[e] = next_time
                if i == N - 1:
                    return True
    return False
T = int(input())
for _ in range(T):
    N, M, W = mii()
    arr = []
    for _ in range(M):
        s, e, t = mii()
        arr.append((s, e, t))
        arr.append((e, s, t))
    for _ in range(W):
        s, e, t = mii()
        arr.append((s, e, -t))
    print("YES" if bellman_ford() else "NO")