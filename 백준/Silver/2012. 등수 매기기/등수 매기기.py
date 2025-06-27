import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
ext = []
for _ in range(n):
    ext.append(int(input()))
ext.sort()
rlt = 0
for i in range(1, n+1):
    rlt += abs(i-ext[i-1])
print(rlt)