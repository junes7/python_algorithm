import heapq,sys
input=lambda:sys.stdin.readline().rstrip()
N = int(input())
M = int(input())
arr = [[] for _ in range(N + 1)]
for _ in range(M):
    a, b, c = map(int, input().split())
    arr[a].append((c, b))
    arr[b].append((c, a))
def prim():
    visited = [False] * (N + 1)
    que = [(0, 1)]
    cnt,ans = 0,0
    while que:
        weight, node = heapq.heappop(que)
        if visited[node]: continue
        visited[node] = True
        ans += weight
        cnt += 1
        if cnt == N: break
        for next_w, next_n in arr[node]:
            if not visited[next_n]:
                heapq.heappush(que, (next_w, next_n))
    print(ans)
prim()