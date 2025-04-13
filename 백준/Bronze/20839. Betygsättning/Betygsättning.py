import sys
input=lambda:sys.stdin.readline().rstrip()
x,y,z=map(int,input().split())
x1,y1,z1=map(int,input().split())
if z1==z:
    if y1<(y+1)//2:
        print("E")
    elif (y+1)//2<=y1<y:
        print("D")
    elif y1==y:
        if x1<(x+1)//2:
            print("C")
        elif (x+1)//2<=x1<x:
            print("B")
        elif x1==x:
            print("A")