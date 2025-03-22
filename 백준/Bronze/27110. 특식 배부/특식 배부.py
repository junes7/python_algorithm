import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
s=0
for i in range(3):
    s+=n if arr[i]>n else arr[i]
print(s)