import sys
input=lambda:sys.stdin.readline().rstrip()
e,f,c=map(int,input().split())
t,cnt=e+f,0
while t>=c:
    cnt+=t//c
    t=t//c+t%c
print(cnt)