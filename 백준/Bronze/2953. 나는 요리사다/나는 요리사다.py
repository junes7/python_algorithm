import sys
input=lambda:sys.stdin.readline().rstrip()
rlt=[0,0]
for i in range(5):
    arr=[*map(int,input().split())]
    t=sum(arr)
    if rlt[1]<t:
        rlt[0]=i+1
        rlt[1]=t
print(*rlt)