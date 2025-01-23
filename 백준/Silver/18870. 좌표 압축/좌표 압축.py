import sys
n=int(sys.stdin.readline())
pt=list(map(int,sys.stdin.readline().split()))
ptset=sorted(set(pt))
ptdic=dict()
for i,num in enumerate(ptset):
    ptdic[num]=i
for i in pt:
    print(ptdic[i],end=' ')