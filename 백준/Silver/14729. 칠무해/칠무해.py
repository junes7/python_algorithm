import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([float(input()) for _ in range(int(input()))])[:7]
for n in arr:
    print("%.3f" % n)