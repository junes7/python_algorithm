import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[[*map(int,input().split())] for _ in range(int(input()))]
for a in arr:
    rank=1
    for b in arr:
        if a[0]<b[0] and a[1]<b[1]:
            rank+=1
    print(rank,end=" ")