import sys
pieces=[1,1,2,2,2,8]
cur=list(map(int,sys.stdin.readline().split()))
for i in range(len(pieces)):
    pieces[i]-=cur[i]
for i in pieces:
    print(i,end=' ')