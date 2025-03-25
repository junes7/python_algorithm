import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
cnt=0
for i in range(1,5):
    if abs(arr[i]-arr[0])<=1000:
        cnt+=1
print(cnt)