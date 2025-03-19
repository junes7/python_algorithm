import sys
input=lambda:sys.stdin.readline().rstrip()
n,h,v=map(int,input().split())
row,col=[h,n-h],[v,n-v]
m=0
for r in row:
    for c in col:
        if m<r*c:
            m=r*c
print(m*4)