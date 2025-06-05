import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    l,w,a=map(int,input().split())
    if l==w==a==0: break
    if w==0:
        print(l,a//l,a)
    elif a==0:
        print(l,w,l*w)
    else:
        print(a//w,w,a)