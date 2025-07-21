import sys
input=lambda:sys.stdin.readline().rstrip()
from collections import deque
c,arr=int(input()),[]
def bfs(st,end):
    q=deque([(st,end,0)])
    while q:
        st,end,cnt=q.popleft()
        if st==end:
            return cnt
        if st*2<=end+3:
            q+=[(st*2,end+3,cnt+1)]
        if st+1<=end:
            q+=[(st+1,end,cnt+1)]
for _ in range(c):
    st,end=map(int,input().split())
    arr+=[bfs(st,end)]
print(*arr,sep="\n")