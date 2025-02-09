import sys,heapq
input=lambda:sys.stdin.readline().rstrip()
V,E=map(int,input().split())
k=int(input())
graph=[[] for _ in range(V+1)]
for _ in range(E):
    u,v,w=map(int,input().split())
    graph[u]+=[(v,w)]
def dijkstra(V,k,graph):
    distance=[float("INF")]*(V+1)
    distance[k],queue=0,[]
    heapq.heappush(queue,(0,k))
    while queue:
        dist,now=heapq.heappop(queue)
        if distance[now]<dist:
            continue
        for next_node,weight in graph[now]:
            cost=dist+weight
            if cost<distance[next_node]:
                distance[next_node]=cost
                heapq.heappush(queue,(cost,next_node))
    return distance
result=dijkstra(V,k,graph)
for i in range(1,V+1):
    print("INF" if result[i]==float("INF") else result[i])