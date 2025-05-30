import sys
input=lambda:sys.stdin.readline().strip()
for _ in range(int(input())):
    mission=[[*map(int,input().split())] for _ in range(int(input()))]
    k,d,a=map(int,input().split())
    s=0
    for mk,md,ma in mission:
        scr=mk*k-md*d+ma*a
        if scr>0: s+=scr
    print(s)