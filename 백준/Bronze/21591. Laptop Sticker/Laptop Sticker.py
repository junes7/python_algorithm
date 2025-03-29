import sys
input=lambda:sys.stdin.readline().rstrip()
w,h,x,y=map(int,input().split())
print(1 if w-x>=2 and h-y>=2 else 0)