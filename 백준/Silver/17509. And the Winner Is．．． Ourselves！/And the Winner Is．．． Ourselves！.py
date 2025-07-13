import sys
input=lambda:sys.stdin.readline().rstrip()
lst=sorted([[*map(int,input().split())] for _ in range(11)])
total,pen=0,0
for i in range(11):
    pen+=total+lst[i][0]
    total+=lst[i][0]
    pen+=20*lst[i][1]
print(pen)