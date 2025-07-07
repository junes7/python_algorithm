import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([input() for _ in range(n)],key=len)
rlt=n;
for i in range(n):
    for j in range(i+1,n):
        if arr[i]==arr[j][:len(arr[i])]:
            rlt-=1
            break
print(rlt)