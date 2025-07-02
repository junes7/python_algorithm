import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    j,n=map(int,input().split())
    arr=sorted([eval('*'.join([*map(str,input().split())])) for _ in range(n)],reverse=True)
    for i in range(n):
        if j-arr[i]<=0:
            print(i+1)
            break
        j-=arr[i]