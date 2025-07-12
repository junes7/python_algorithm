import sys
input=lambda:sys.stdin.readline().rstrip()
lng=[*map(int,input().split())]
mark=[*map(int,input().split())]
t,rlt=int(input()),[0]*2
for i in range(2):
    if (mark[i]+t)//lng[i]%2==0:
        rlt[i]=(mark[i]+t)%lng[i]
    else:
        rlt[i]=lng[i]-(mark[i]+t)%lng[i]
print(*rlt)