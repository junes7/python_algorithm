import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    t=input()
    if t=="": break
    h,p=map(int,t.split())
    print("%.2f" % (h/p))