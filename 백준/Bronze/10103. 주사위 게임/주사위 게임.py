import sys
input=lambda:sys.stdin.readline().rstrip()
total=[100,100]
for _ in range(int(input())):
    x,y=map(int,input().split())
    if x<y:
        total[0]-=y
    elif x>y:
        total[1]-=x
print(*total,sep="\n")