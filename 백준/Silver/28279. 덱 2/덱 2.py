import sys
from collections import deque
n=int(sys.stdin.readline())
dq=deque()
for i in range(n):
    num=list(map(int,sys.stdin.readline().split()))
    if num[0]==1:
        dq.appendleft(num[1])
    elif num[0]==2:
        dq.append(num[1])
    elif num[0]==3:
        print(-1 if len(dq)==0 else dq.popleft())
    elif num[0]==4:
        print(-1 if len(dq)==0 else dq.pop())
    elif num[0]==5:
        print(len(dq))
    elif num[0]==6:
        print(1 if len(dq)==0 else 0)
    elif num[0]==7:
        print(-1 if len(dq)==0 else dq[0])
    elif num[0]==8:
        print(-1 if len(dq)==0 else dq[-1])