import sys,math
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    cre,total=0,0
    n=int(input())
    for i in range(n):
        c,g=map(float,input().split())
        cre+=c
        total+=c*g
    print(int(cre),round(total/cre,1))