from collections import deque, defaultdict
import sys
input = lambda:sys.stdin.readline().rstrip()
t=int(input())
def find_final_ranking(n, last_year, changes):
    graph = defaultdict(list)
    in_degree = [0] * (n + 1)
    for i in range(n):
        for j in range(i + 1, n):
            graph[last_year[i]].append(last_year[j])
            in_degree[last_year[j]] += 1
    for a, b in changes:
        if b in graph[a]:
            graph[a].remove(b)
            in_degree[b] -= 1
            graph[b].append(a)
            in_degree[a] += 1
        else:
            graph[b].remove(a)
            in_degree[a] -= 1
            graph[a].append(b)
            in_degree[b] += 1
    queue = deque([i for i in range(1, n + 1) if in_degree[i]==0])
    result = []
    while queue:
        if len(queue)>1:
            return "?"     
        current = queue.popleft()
        result.append(current)   
        for neighbor in graph[current]:
            in_degree[neighbor]-=1
            if in_degree[neighbor] == 0:
                queue.append(neighbor) 
    if len(result) == n:
        return " ".join(map(str, result))
    else:
        return "IMPOSSIBLE"
for i in range(t):
    n=int(input())
    last_year=list(map(int,input().split()))
    m=int(input())
    changes=[tuple(map(int,input().split())) for i in range(m)]
    print(find_final_ranking(n,last_year,changes))