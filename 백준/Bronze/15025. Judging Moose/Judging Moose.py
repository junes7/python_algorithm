import sys
input=lambda:sys.stdin.readline().rstrip()
l,r=map(int,input().split())
if l==0 and r==0:
    print("Not a moose")
else:
    if l==r:
        print("Even",l*2)
    else:
        print("Odd", l*2 if l>r else r*2)