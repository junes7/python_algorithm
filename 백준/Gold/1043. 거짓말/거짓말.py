import sys
input=lambda:sys.stdin.readline().rstrip()
N, M = map(int, input().split())
_, *true_list = map(int, input().split())
parent = [i for i in range(N+1)]
TRUE_KNOW = 0
def find(a):
    if a != parent[a]:
        parent[a] = find(parent[a])
    return parent[a]
def union(a, b):
    a,b = find(a),find(b)
    if a < b:
        parent[b] = a   
    else:
        parent[a] = b
for i in true_list:
    union(TRUE_KNOW, i)
parties = []
for i in range(M):
    cnt, *party = list(map(int, input().split()))
    parties.append(party)
    for i in range(cnt - 1):
        union(party[i], party[i+1])
cnt = 0
for party in parties:  
    if find(party[0]) == TRUE_KNOW:
        continue
    cnt += 1
print(cnt)