import sys
from collections import deque
n=int(sys.stdin.readline())
dq=deque()
for i in range(n,0,-1):
    dq+=[i]
while len(dq)>1:
    dq.pop()
    dq.appendleft(dq.pop())
print(dq[0])