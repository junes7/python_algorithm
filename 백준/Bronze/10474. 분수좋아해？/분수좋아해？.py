import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    a,b=map(int,input().split())
    if a==b==0: break
    print("%d %d / %d" % (a//b,a%b,b))