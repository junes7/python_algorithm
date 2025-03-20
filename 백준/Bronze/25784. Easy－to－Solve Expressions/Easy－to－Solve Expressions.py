import sys
from copy import deepcopy
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
rlt=0
for i in range(3):
    arr_copy=deepcopy(arr);
    t=arr_copy[i]
    del arr_copy[i]
    if t==(arr_copy[0]+arr_copy[1]):
        rlt=1
        break
    elif t==(arr_copy[0]*arr_copy[1]):
        rlt=2
        break
    else:
        rlt=3
print(rlt)