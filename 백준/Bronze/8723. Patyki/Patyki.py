import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
arr.sort()
if arr[0]**2+arr[1]**2==arr[2]**2:
    print(1)
else:
    if arr[0]==arr[1]==arr[2]:
        print(2)
    else:
        print(0)