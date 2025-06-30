import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([[*map(int,input().split())] for _ in range(n)])
s=0
for i in range(n):
    s+=arr[i][0]*(i+1)+arr[i][1]
print(s)