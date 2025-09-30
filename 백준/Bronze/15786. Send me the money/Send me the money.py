import sys
N, M = map(int, sys.stdin.readline().split())
S = sys.stdin.readline().rstrip()
for _ in range(M):
    line = sys.stdin.readline().rstrip()
    i = 0
    for char in line:
        target = S[i]
        if char != target:
            continue
        i += 1
        if N <= i:
            break
    print('true') if N == i else print('false')