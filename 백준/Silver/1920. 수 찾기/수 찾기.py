def binarySearch(board,target,start,end):
    while start<=end:
        mid=(start+end)//2
        if board[mid]==target:
            return 1
        elif board[mid]<target:
            start=mid+1
        else:
            end=mid-1
    return 0
import sys
n=int(sys.stdin.readline())
a=list(map(int,sys.stdin.readline().split()))
m=int(sys.stdin.readline())
tar=list(map(int,sys.stdin.readline().split()))
a.sort()
for i in tar:
    print(binarySearch(a,i,0,n-1))