import sys
input=lambda:sys.stdin.readline().rstrip()
h,m=map(int,input().split())
print((h-9)*60+m)