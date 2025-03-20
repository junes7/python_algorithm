import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
s=0
for i in range(n):
    s+=arr[i]//2+(0 if arr[i]%2==0 else 1)
print(s)