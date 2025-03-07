import sys
input=lambda:sys.stdin.readline().rstrip()
n,a,b=map(int,input().split())
st=""
if b>=n:
    if b==a:
        st="Anything"
    elif b<a:
        st="Subway"
    else:
        st="Bus"
print(st)