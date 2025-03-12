import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[int(input()) for _ in range(4)]
r=0
for i in range(3):
    if arr[i]<arr[i+1]:
        r+=1
    elif arr[i]>arr[i+1]:
        r-=1
if len(set(arr))==1:
    print("Fish At Constant Depth")
elif r==3:
    print("Fish Rising")
elif r==-3:
    print("Fish Diving")
else:
    print("No Fish")