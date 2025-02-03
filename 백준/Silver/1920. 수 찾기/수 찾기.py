import sys
from bisect import bisect_left
mii=lambda:sys.stdin.readline().rstrip()
n=int(mii())
arr=list(map(int,mii().split()))
m=int(mii())
tar=list(map(int,mii().split()))
arr.sort()
for i in tar:
    idx=bisect_left(arr,i)
    print(1 if idx<n and arr[idx]==i else 0)