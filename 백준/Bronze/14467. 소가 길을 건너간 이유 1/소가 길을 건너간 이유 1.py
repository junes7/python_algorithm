import sys
input = sys.stdin.readline
n = int(input())
cows = [0 for _ in range(n+1)]
now = [-1 for _ in range(n+1)]
for i in range(n):
    idx, loc = map(int, input().split())
    if now[idx] == -1:
        now[idx] = loc
    elif now[idx] != loc:
        cows[idx] += 1
        now[idx] = loc
print(sum(cows))