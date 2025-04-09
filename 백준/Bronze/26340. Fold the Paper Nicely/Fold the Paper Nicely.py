import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    *arr,t=map(int,input().split())
    print(f"Data set: {arr[0]} {arr[1]} {t}")
    for _ in range(t):
        if arr[0]>arr[1]:
            arr[0]//=2
        else:
            arr[1]//=2
    arr.sort(reverse=True)
    print(f"{arr[0]} {arr[1]}\n")