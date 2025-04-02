import sys
input=lambda:sys.stdin.readline().rstrip()
y,m,d=map(int,input().split('-'))
if m<9 or m==9 and d<=16:
    print("GOOD")
else:
    print("TOO LATE")