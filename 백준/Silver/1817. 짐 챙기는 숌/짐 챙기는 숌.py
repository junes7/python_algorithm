import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
arr=[*map(int,input().split())]
wgh,cnt=0,1
if n>0:
    for i in range(n-1,-1,-1):
        wgh+=arr[i]
        if wgh>m:
            wgh=arr[i]
            cnt+=1
    print(cnt)
else:
    print(0)