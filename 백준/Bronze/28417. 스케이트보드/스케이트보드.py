import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
total=[0]*n
for i in range(n):
    scr=[*map(int,input().split())]
    run,trick=sorted(scr[:2],reverse=True),sorted(scr[2:],reverse=True)
    total[i]=run[0]+trick[0]+trick[1]
print(max(total))