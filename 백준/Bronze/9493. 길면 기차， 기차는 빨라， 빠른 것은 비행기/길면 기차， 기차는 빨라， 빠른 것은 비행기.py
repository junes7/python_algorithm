import sys
input=lambda:sys.stdin.readline().strip()
while 1:
    d,a,b=map(int,input().split())
    if d==a==b==0: break
    t=round((d/a-d/b)*3600)
    h=t//3600
    m=(t%3600)//60
    s=(t%3600)%60
    print("%01d:%02d:%02d" % (h,m,s))