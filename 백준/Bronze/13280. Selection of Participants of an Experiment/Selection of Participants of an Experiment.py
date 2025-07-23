import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    n=int(input())
    if n==0: break
    arr=sorted([*map(int,input().split())])
    diff=arr[-1]
    for i in range(1,n):
        if diff>arr[i]-arr[i-1]:
            diff=arr[i]-arr[i-1]
    print(diff)