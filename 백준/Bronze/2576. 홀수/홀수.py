import sys
s,minn=0,100
for i in range(7):
    n=int(sys.stdin.readline().rstrip())
    if n%2==1:
        s+=n
        if minn>n:
            minn=n
print(-1 if s==0 else f'{s}\n{minn}')