import sys
from collections import deque
input=lambda:sys.stdin.readline().rstrip() 
N, M, R = map(int, input().split())
graph = [[] for _ in range(N+1)]
for i in range(M):
    u, v = map(int, input().split())
    graph[u].append(v)
    graph[v].append(u)
visited = [-1] * (N+1)
def BFS(x):
    global depth
    queue = deque()
    queue.append(x)
    visited[x] = 0
    while queue:
        v = queue.popleft()
        for i in graph[v]:
            if visited[i] == -1:
                visited[i] = visited[v] + 1
                queue.append(i)
BFS(R)
for i in visited[1:]:
    print(i)