import sys
input=lambda:sys.stdin.readline().rstrip()
C=float(input())
total=0
for _ in range(int(input())):
    w,l=map(float,input().split())
    total+=w*l*C
print("%.7f" % total)