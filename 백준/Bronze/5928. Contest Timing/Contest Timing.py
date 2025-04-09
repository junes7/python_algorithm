import sys
input=lambda:sys.stdin.readline().rstrip()
d,h,m=map(int,input().split())
if d<11 or (d<=11 and h<11) or (d<=11 and h<=11 and m<11):
    time=-1
else:
    time=(d-11)*24*60+(h-11)*60+(m-11)
    if time<0:
        time+=24*60
print(time)