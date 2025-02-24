import sys
sys.setrecursionlimit(10**5)
input=lambda:sys.stdin.readline().rstrip()
N, M = map(int, input().split())
p = [i for i in range(N+1)]
def find(a):
    if a != p[a]:
        p[a] = find(p[a])
    return p[a]
def union(a, b):
    pa = find(a)
    pb = find(b)
    p[pa] = pb
for _ in range(M):
    q, a, b = map(int, input().split())
    if q == 0: union(a, b)  
    else:
        print("YES" if find(a)==find(b) else "NO")