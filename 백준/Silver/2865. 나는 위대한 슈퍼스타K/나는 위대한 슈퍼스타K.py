import sys
input=lambda:sys.stdin.readline().rstrip()
n,m,k=map(int,input().split())
sing=[0.0]*n
for _ in range(m):
    scr=[*map(float,input().split())]
    for i in range(0,len(scr),2):
        if sing[int(scr[i])-1]<scr[i+1]:
            sing[int(scr[i])-1]=scr[i+1]
sing=sorted(sing,reverse=True)[:k]
print(round(sum(sing),1))