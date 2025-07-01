import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[[*map(int,input().split())]for _ in range(n)]
arr.sort(key=lambda x:(-x[0],x[1]))
cnt=0
for i in range(5,n):
    if arr[i][0]==arr[4][0]:
        cnt+=1;
print(cnt)