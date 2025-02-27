import sys
input=lambda:sys.stdin.readline().rstrip()
N, M, K = map(int, input().split())
arr = [int(input()) for _ in range(N)]
tree = [0] * (4 * N)
def init(node, start, end):
    if start == end:
        tree[node] = arr[start]
        return
    mid = (start + end) // 2
    init(2 * node, start, mid)
    init(2 * node + 1, mid + 1, end)
    tree[node] = tree[2 * node] + tree[2 * node + 1]
init(1, 0, N-1)
def update(node, start, end, idx, diff):
    if idx < start or end < idx:
        return
    tree[node] += diff
    if start != end:
        mid = (start + end) // 2
        update(2 * node, start, mid, idx, diff)
        update(2 * node + 1, mid + 1, end, idx, diff)
def query(node, start, end, left, right):
    if right < start or end < left:
        return 0
    if left <= start and end <= right:
        return tree[node]
    mid = (start + end) // 2
    q1 = query(2 * node, start, mid, left, right)
    q2 = query(2 * node + 1, mid + 1, end, left, right)
    return q1 + q2 
for _ in range(M+K):
    a, b, c = map(int, input().split())
    b -= 1
    if a == 1:
        diff = c - arr[b]
        arr[b] = c
        update(1, 0, N-1, b, diff)
    elif a == 2:
        c -= 1
        print(query(1, 0, N-1, b, c))