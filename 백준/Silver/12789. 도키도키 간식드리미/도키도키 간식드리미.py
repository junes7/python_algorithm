import sys
from collections import deque
dq=deque()
n=int(sys.stdin.readline())
numlist=list(map(int,sys.stdin.readline().split()))
i,j=1,0
while(i<n+1):
    if j>=n:
        break
    while j<n-1 and numlist[j]!=i:
        dq+=[numlist[j]]
        j+=1
    dq+=[numlist[j]]
    j+=1
    while len(dq)>0:
        if dq[-1]!=i:
            break
        elif dq[-1]==i:
            dq.pop()
            i+=1
print("Nice" if len(dq)==0 else "Sad")