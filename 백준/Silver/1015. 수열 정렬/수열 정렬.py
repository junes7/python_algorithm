import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
num=sorted(arr.copy())
for i in range(n):
    t=num.index(arr[i])
    num[t]=-1
    print(t,end=' ')