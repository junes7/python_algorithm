import sys
n,m=map(int,sys.stdin.readline().split())
pkmlist,pkmdic=[],{}
for i in range(n):
    t=sys.stdin.readline().split()[0]
    pkmlist+=[t]
    pkmdic[t]=i
for i in range(m):
    t=sys.stdin.readline().split()[0]
    print(pkmlist[int(t)-1] if t.isdigit() else pkmdic[t]+1)