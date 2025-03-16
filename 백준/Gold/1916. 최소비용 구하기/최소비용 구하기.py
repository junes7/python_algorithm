import sys,heapq
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
m=int(input())
graph=[[] for _ in range(n+1)]
for _ in range(m):
    u,v,w=map(int,input().split())
    graph[u]+=[(v,w)]
start,end=map(int,input().split())
def dijkstra(start, end, graph, n):
    distances = [float('inf')] * (n + 1)
    distances[start] = 0
    priority_queue = [(0, start)]
    while priority_queue:
        current_distance, current_node = heapq.heappop(priority_queue)
        if current_distance>distances[current_node]:
            continue
        for adjacent, weight in graph[current_node]:
            distance = current_distance+weight
            if distance<distances[adjacent]:
                distances[adjacent] = distance
                heapq.heappush(priority_queue, (distance, adjacent))
    return distances[end]
print(dijkstra(start,end,graph,n))