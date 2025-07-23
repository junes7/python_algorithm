import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([float(input()) for _ in range(int(input()))])
print("%.2f" % arr[1])