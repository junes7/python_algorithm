import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
isOdd,rlt=False,1
for i in range(3):
    if arr[i]%2!=0:
        rlt*=arr[i]
        isOdd=True
print(rlt if isOdd else arr[0]*arr[1]*arr[2])