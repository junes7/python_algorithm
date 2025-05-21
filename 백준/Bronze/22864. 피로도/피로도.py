import sys
input=lambda:sys.stdin.readline().rstrip()
a,b,c,m=map(int,input().split())
t,w=0,0
for _ in range(24):
    if t+a<=m:
        t+=a
        w+=b
    else:
        t=t-c if t-c>=0 else 0
print(w)