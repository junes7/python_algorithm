import sys
from collections import deque
n,k=map(int,sys.stdin.readline().split())
dq=deque([i for i in range(1,n+1)])
st,res=k,[]
while len(res)<n:
    res+=[dq[st-1]]
    del dq[st-1]
    if len(dq)>0:
        st=(st-1+k)%len(dq)
        if st==0: st=len(dq)
print("<",end='')
for i in res:
    print(i,end='' if i==res[-1] else ", ")
print(">")