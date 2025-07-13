import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
scr=[*map(int,input().split())]
scr_sum=[]
for _ in range(m):
    idx,*prb=input().split()
    t=0
    for i in range(n):
        t+=(1 if prb[i]=='O' else 0)*scr[i]
    scr_sum+=[[int(idx),t]]
scr_sum.sort(key=lambda x:(-x[1],x[0]))
print(*scr_sum[0])