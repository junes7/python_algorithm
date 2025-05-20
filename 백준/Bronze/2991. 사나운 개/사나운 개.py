import sys
input=lambda:sys.stdin.readline().rstrip()
a,b,c,d=map(int,input().split())
arr=[*map(int,input().split())]
for n in arr:
    cnt=0
    if 0<n%(a+b)<=a:
        cnt+=1
    if 0<n%(c+d)<=c:
        cnt+=1
    print(cnt)