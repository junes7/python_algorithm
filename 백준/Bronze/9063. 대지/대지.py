import sys

ptx,pty,x,y=[],[],0,0
n=int(sys.stdin.readline())
if(n==1):
    print(0);
else:
    for i in range(n):
        x,y=map(int,sys.stdin.readline().split())
        ptx+=[x]
        pty+=[y]
    print((max(ptx)-min(ptx))*(max(pty)-min(pty)))