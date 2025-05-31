import sys
input=lambda:sys.stdin.readline().strip()
while 1:
    a,b=map(int,input().split())
    if a==b==0: break
    t=a-b
    if t>3:
        print(t//2-t%2,t%2)
    else:
        print(1 if t==2 else 0,1 if t==3 else 0)