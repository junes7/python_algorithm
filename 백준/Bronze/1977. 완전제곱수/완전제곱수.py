import sys,math
input=lambda:sys.stdin.readline().rstrip()
m=int(input())
n=int(input())
s=[]
for i in range(m,n+1):
    t=math.sqrt(i)
    if t==int(t):
        s+=[i]
if len(s)>0:
    print(sum(s),min(s),sep="\n")
else:
    print(-1)