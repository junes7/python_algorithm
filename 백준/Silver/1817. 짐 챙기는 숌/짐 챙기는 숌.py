import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
arr=[*map(int,input().split())]
wgh,cnt=0,1
if n>0:
    for box in arr:
        wgh+=box
        if wgh>m:
            wgh=box
            cnt+=1
    print(cnt)
else:
    print(0)