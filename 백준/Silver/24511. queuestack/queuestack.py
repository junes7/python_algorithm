import sys
from collections import deque
n=int(sys.stdin.readline())
queuestack=list(map(int,sys.stdin.readline().split()))
numlist=list(map(int,sys.stdin.readline().split()))
dq=deque()
for i in range(n):
    if queuestack[i]==0:
        dq+=[numlist[i]]
n=int(sys.stdin.readline())
numlist=list(map(int,sys.stdin.readline().split()))
for i in range(n):
    dq.appendleft(numlist[i])
    print(dq.pop(),end=' ')