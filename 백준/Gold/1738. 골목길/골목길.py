import sys
input=lambda:sys.stdin.readline().rstrip()
mii = lambda : map(int, input().split())
N, M = mii()
arr = []
for _ in range(M):
    u, v, w = mii()
    arr.append((u, v, w))
def bellman_ford():
    INF = float("INF")
    money = [-INF] * (N + 1)
    money[1] = 0
    path = [0] * (N + 1)
    for i in range(N):
        for u, v, w in arr:
            next_money = money[u] + w
            if money[u] == -INF:
                continue
            if money[v] < next_money:
                money[v] = next_money
                path[v] = u

                if i == N - 1:
                    money[v] = INF
    if money[N] == INF:
        print(-1)
        return
    nxt = N
    ans = [nxt]    
    while nxt != 1:
        nxt = path[nxt]
        ans.append(nxt)
    print(*ans[::-1])
    return
bellman_ford()