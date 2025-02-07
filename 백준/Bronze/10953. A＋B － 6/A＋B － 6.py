import sys
mii=lambda:sys.stdin.readline().rstrip()
n=int(mii())
for i in range(n):
    print(sum(list(map(int,mii().split(',')))))