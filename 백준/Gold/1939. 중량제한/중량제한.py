import sys
input=lambda:sys.stdin.readline().rstrip()
n, m = map(int, input().split())
graph = [[] for _ in range(n + 1)]
for _ in range(m):
    x, y, d = map(int, input().split())
    graph[x].append((y, d))
    graph[y].append((x, d))
s, e = map(int, input().split())
ans,left,right = 0,1,10**9
while left<=right:
    mid = (left + right) // 2
    # 그래프 탐색 초기 설정
    visited = [False] * (n + 1)
    visited[s] = True
    q = [s]
    for idx in q:
        for adj, d in graph[idx]:
            if not visited[adj] and d>=mid:
                visited[adj] = True
                q.append(adj)
    if visited[e]:
        ans = mid
        left = mid + 1
    else:
        right = mid - 1
print(ans)