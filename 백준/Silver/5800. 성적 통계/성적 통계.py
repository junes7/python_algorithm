import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(int(input())):
    n,*arr=map(int,input().split())
    arr.sort(reverse=True)
    maxn=0
    for j in range(n-1):
        if maxn<arr[j]-arr[j+1]:
            maxn=arr[j]-arr[j+1]
    print(f"Class {i+1}")
    print(f"Max {max(arr)}, Min {min(arr)}, Largest gap {maxn}")