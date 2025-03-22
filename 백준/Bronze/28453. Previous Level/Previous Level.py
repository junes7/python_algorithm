import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
rank=[]
for i in range(n):
    if arr[i]>=300:
        rank+=[1]
    elif arr[i]>=275:
        rank+=[2]
    elif arr[i]>=250:
        rank+=[3]
    else:
        rank+=[4]
print(*rank)