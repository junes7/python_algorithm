import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
t=[*map(int,input().split())]
Yl,Ml=[],[]
for i in range(len(t)):
    Yl+=[(t[i]//30+1)*10]
    Ml+=[(t[i]//60+1)*15]
total_y=sum(Yl)
total_m=sum(Ml)
if total_y==total_m:
    print("Y","M",total_y)
elif total_y<total_m:
    print("Y",total_y)
else:
    print("M",total_m)