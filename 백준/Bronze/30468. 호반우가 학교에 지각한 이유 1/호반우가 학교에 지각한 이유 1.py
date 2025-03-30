import sys
input=lambda:sys.stdin.readline().rstrip()
*arr,n=map(int,input().split())
print(0 if sum(arr)>=n*4 else n*4-sum(arr))