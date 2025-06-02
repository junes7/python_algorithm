import sys
input=lambda:sys.stdin.readline().rstrip()
c, m = [0 for i in range(3)], [0 for i in range(3)]
for i in range(3):
    c[i], m[i] = map(int, input().split())
for i in range(100):
    idx = i % 3
    next_idx = (idx + 1) % 3
    m[idx], m[next_idx] = max(m[idx] - (c[next_idx] - m[next_idx]), 0), min(c[next_idx], m[idx] + m[next_idx])
for num in m:
    print(num)