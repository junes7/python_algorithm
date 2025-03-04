import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    t=input()
    if t=="": break
    n,s=map(int,t.split())
    print(s//(n+1))