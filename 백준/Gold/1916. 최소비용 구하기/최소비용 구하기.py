import sys,heapq
input=lambda:sys.stdin.readline().rstrip()
def dijkstra(start, end, graph, n):
    distances = [float('inf')] * (n + 1)
    distances[start] = 0
    priority_queue = [(0, start)]
    while priority_queue:
        current_distance, current_node = heapq.heappop(priority_queue)
        # 현재의 경로가 최적 경로가 아니라면 건너 뛴다.
        if current_distance>distances[current_node]:
            continue
        for adjacent, weight in graph[current_node]:
            # 인접 지점까지의 거리를 구한다.
            distance = current_distance+weight
            # 인접 지점까지의 거리고 현재까지의 최적 경로보다 짧다면,
            if distances[adjacent]>distance:
                distances[adjacent] = distance
                heapq.heappush(priority_queue, (distance, adjacent))
    return distances[end]
n=int(input())
m=int(input())
graph=[[] for _ in range(n+1)]
for _ in range(m):
    u,v,w=map(int,input().split())
    graph[u]+=[(v,w)]
start,end=map(int,input().split())
print(dijkstra(start,end,graph,n))