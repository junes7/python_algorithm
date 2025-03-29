import sys
input=lambda:sys.stdin.readline().rstrip()
x,l,r=map(int,input().split())
minn,idx=abs(x-l),l
for i in range(l+1,r+1):
    if minn>abs(x-i):
        minn=abs(x-i)
        idx=i
print(idx)