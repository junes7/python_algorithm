h,m=map(int,input().split())
d=int(input())
if d+m<60:
    m+=d;
else:
    h+=(m+d)//60
    if h>=24:
        h-=24
    m=(m+d)%60
    
print(h,m)