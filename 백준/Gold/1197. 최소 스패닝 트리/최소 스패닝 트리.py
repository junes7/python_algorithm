import sys
input=lambda:sys.stdin.readline().rstrip()
mii = lambda : map(int, input().split())
V, E = mii()
tree = [[*mii()] for _ in range(E)]
tree.sort(key=lambda x: x[2])
parent = list(range(V+1))
def union(a, b):
    a = find(a)
    b = find(b)
    if a < b:
        parent[a] = b
    else:
        parent[b] = a
def find(a):
    if a != parent[a]:
        parent[a] = find(parent[a])
    return parent[a]
ans = 0
for a, b, c in tree:
    if find(a) != find(b):
        union(a, b)
        ans += c
print(ans)