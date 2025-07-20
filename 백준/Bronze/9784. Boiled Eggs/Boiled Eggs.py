import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(int(input())):
    n,p,q=map(int,input().split())
    arr=sorted([*map(int,input().split())])
    total,cnt=0,n
    for j in range(n):
        if total+arr[j]>q:
            cnt=j
            break
        else:
            total+=arr[j]
    print("Case %d: %d" % (i+1,min(cnt,p)))