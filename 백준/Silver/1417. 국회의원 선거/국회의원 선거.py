import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
tar=int(input())
arr=[int(input()) for _ in range(n-1)]
cnt=0
if n==1:
    pass
else:
    while tar<=max(arr):
        tar+=1
        cnt+=1
        arr[arr.index(max(arr))]-=1
print(cnt)