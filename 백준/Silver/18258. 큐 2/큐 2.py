import sys
from collections import deque
n=int(sys.stdin.readline())
dq=deque()
for i in range(n):
    cmd=list(sys.stdin.readline().split())
    if cmd[0]=='push':
        dq.append(int(cmd[1]))
    elif cmd[0]=='pop':
        print(-1 if len(dq)==0 else dq.popleft())
    elif cmd[0]=='front':
        print(-1 if len(dq)==0 else dq[0])
    elif cmd[0]=='back':
        print(-1 if len(dq)==0 else dq[-1])
    elif cmd[0]=='size':
        print(len(dq))
    elif cmd[0]=='empty':
        print(1 if len(dq)==0 else 0)