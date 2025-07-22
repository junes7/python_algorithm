import sys
input=lambda:sys.stdin.readline().rstrip()
arr=set()
for _ in range(2):
    for c in input().split():
        arr.add(c)
arr=sorted(arr)
for i in arr:
    for j in arr:
        print(i,j)