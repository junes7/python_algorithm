import sys
input=lambda:sys.stdin.readline().strip()
while 1:
    n,diff,t=map(int,input().split())
    if diff==0: break
    print((t-n)//diff+1 if (t-n)%diff==0 and (t-n)//diff+1>0 else "X")