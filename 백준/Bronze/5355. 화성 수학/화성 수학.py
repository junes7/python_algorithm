import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    arr=input().split()
    t=float(arr[0])
    for i in range(1,len(arr)):
        if arr[i]=='@':
            t*=3
        elif arr[i]=='%':
            t+=5
        elif arr[i]=='#':
            t-=7
    print(f"{t:.2f}")