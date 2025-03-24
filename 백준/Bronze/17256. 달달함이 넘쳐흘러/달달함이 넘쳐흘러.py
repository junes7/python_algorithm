import sys
input=lambda:sys.stdin.readline().rstrip()
a=[*map(int,input().split())]
c=[*map(int,input().split())]
print(c[0]-a[2],c[1]//a[1],c[2]-a[0])