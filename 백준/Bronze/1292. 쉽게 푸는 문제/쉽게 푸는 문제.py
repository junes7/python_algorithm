import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[i for i in range(1,46) for _ in range(i)]
a,b=map(int,input().split())
cnt=0
for i in range(a-1,b):
    cnt+=arr[i]
print(cnt)