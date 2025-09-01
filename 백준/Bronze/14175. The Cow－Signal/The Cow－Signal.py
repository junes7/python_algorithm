import sys
input=lambda:sys.stdin.readline().rstrip()
M, N, K = map(int, input().split())
signal = []
for m in range(M):
    tmp = input()
    signal.append(tmp)
for s in signal:
    for k in range(K):
        for c in s:
            print(c*K, end='')
        print('')