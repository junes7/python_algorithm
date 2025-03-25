import sys
input=lambda:sys.stdin.readline().rstrip()
t,*arr=map(int,input().split())
cnt=0
for i in range(4):
    if abs(arr[i]-t)<=1000:
        cnt+=1
print(cnt)