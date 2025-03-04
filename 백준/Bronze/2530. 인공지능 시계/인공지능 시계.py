import sys
input=lambda:sys.stdin.readline().rstrip()
h,m,s=map(int,input().split())
t=int(input())
if t>=3600:
    h+=t//3600
    t%=3600
m+=t//60
s+=t%60
if s>=60:
    m+=s//60
    s%=60
if m>=60:
    h+=m//60
    m%=60
if h>=24:
    h%=24
print(h,m,s)