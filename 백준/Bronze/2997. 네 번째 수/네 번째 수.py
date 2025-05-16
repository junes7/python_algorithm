import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([*map(int,input().split())])
diff1,diff2=arr[1]-arr[0],arr[2]-arr[1]
if diff1==diff2:
    print(arr[2]*2-arr[1])
elif diff1>diff2:
    print(arr[1]*2-arr[2])
else:
    print(arr[1]*2-arr[0])