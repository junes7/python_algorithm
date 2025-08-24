import sys
input=lambda:sys.stdin.readline().rstrip()
arr,cnt=[*map(int,input().split())],0
for i in range(len(arr)):
    if arr[i]>0:
        cnt+=1
print(cnt)