import sys
input=lambda:sys.stdin.readline().rstrip()
l=int(input())
nums=sorted([*map(int,input().split())])
n=int(input())
if n in nums:
    print(0)
    exit(0)
ran=[0]*2
for num in nums:
    if num<n:
        ran[0]=num
    elif num>n and ran[1]==0:
        ran[1]=num
ran[0]+=1
ran[1]-=1
print((n-ran[0])*(ran[1]-n+1)+(ran[1]-n))