import sys
input=lambda:sys.stdin.readline().rstrip()
l,p=map(int,input().split())
nums=[*map(int,input().split())]
for i in range(5):
    print(nums[i]-l*p,end=' ')