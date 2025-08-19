import sys
input=lambda:sys.stdin.readline()
n, f = map(int, input().split())
record = []
for _ in range(n):
    x, v = map(int, input().split())
    record.append((f - x) / v)	# (목표 거리 - 현재 위치) / 속력
print(record.index(min(record)) + 1)