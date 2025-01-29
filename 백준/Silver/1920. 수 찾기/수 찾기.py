def binarySearch(board,target,start,end):
    if start > end:
        return 0
    mid=(start+end)//2
    if board[mid]==target:
        return 1
    elif board[mid]<target:
        return binarySearch(board,target,mid+1,end)
    else:
        return binarySearch(board,target,start,mid-1)

import sys
n=int(sys.stdin.readline())
a=list(map(int,sys.stdin.readline().split()))
m=int(sys.stdin.readline())
tar=list(map(int,sys.stdin.readline().split()))
a.sort()
start,end=0,n-1
for i in tar:
    print(binarySearch(a,i,start,end))