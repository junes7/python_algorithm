import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[int(input()) for _ in range(int(input()))]
print("Junhee is not cute!" if arr.count(0)>arr.count(1) else "Junhee is cute!")