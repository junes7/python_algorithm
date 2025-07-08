import sys
input=lambda:sys.stdin.readline().rstrip()
dicx,dicy={},{}
rlt=[0]*2
for _ in range(int(input())):
    x,y=map(int,input().split())
    dicx[x]=dicx.get(x,0)+1
    dicy[y]=dicy.get(y,0)+1
for key,val in dicx.items():
    if val>=2:
        rlt[0]+=1
for key,val in dicy.items():
    if val>=2:
        rlt[1]+=1
print(sum(rlt))