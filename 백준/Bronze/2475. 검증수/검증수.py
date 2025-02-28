import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
total=0
for i in range(len(arr)):
    total+=arr[i]**2
print(total%10)