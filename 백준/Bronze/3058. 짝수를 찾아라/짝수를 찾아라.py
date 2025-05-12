import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    arr=[*map(int,input().split())]
    total,minn=0,100
    for i in range(7):
        if arr[i]%2==0:
            total+=arr[i];
            if minn>arr[i]:
                minn=arr[i];
    print(total,minn)