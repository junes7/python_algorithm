import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(int(input())):
    n=int(input())
    v1=sorted([*map(int,input().split())])
    v2=sorted([*map(int,input().split())],reverse=True)
    total=0
    for j in range(n):
        total+=v1[j]*v2[j]
    print("Case #%d: %d" % (i+1,total))