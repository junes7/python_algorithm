import sys

ptx,pty=[],[]
x2,y2=0,0
for i in range(3):
    x,y=map(int,sys.stdin.readline().split())
    ptx+=[x]
    pty+=[y]
for i in range(3):
    if ptx.count(ptx[i])==1:
        x2=ptx[i]
    if pty.count(pty[i])==1:
        y2=pty[i]
print(f"{x2} {y2}")