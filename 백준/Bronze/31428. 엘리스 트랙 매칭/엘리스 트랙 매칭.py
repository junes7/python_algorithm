import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=input().split()
t=input()
cnt=0
for i in range(n):
    if arr[i]==t:
        cnt+=1
print(cnt)