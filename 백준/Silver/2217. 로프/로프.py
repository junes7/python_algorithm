import sys
n=int(sys.stdin.readline())
ropes=sorted([int(sys.stdin.readline()) for i in range(n)])
best=0
for i in range(n):
    if best<ropes[i]*(n-i):
        best=ropes[i]*(n-i)
print(best)