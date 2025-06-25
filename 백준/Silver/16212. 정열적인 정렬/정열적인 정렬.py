import sys
input=lambda:sys.stdin.readline().rstrip()
x = int(input())
y = sorted([*map(int,input().split())])
for i in y:
    print(i,end=' ')