import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(3):
    T=[*map(int,input().split())]
    h,m,s=T[3]-T[0],T[4],T[5]
    if s-T[2]<0:
        s=60+s-T[2]
        if m==0:
            m+=60
            h-=1
        m-=1
    else:
        s=s-T[2]
    if m-T[1]<0:
        m=60+m-T[1]
        h-=1
    else:
        m=m-T[1]
    print(h,m,s)