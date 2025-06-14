import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n=int(input())
    rlt=0
    for i in range(1,n):
        if i**2>n: break
        rlt+=1
    print(rlt)