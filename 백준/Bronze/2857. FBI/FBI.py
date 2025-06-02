import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[i for i in range(1,6) if "FBI" in input()]
if len(arr):
    print(*arr)
else:
    print("HE GOT AWAY!")