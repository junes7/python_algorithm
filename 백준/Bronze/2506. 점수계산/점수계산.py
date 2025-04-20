import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
accum=[arr[0]]
for i in range(1,n):
    accum+=[0 if arr[i]==0 else accum[-1]+1]
print(sum(accum))