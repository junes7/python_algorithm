import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([*map(int,input().split())])
for c in input():
    print(arr[ord(c)-65],end=' ')