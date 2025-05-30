import sys
input=lambda:sys.stdin.readline().strip()
for _ in range(int(input())):
    n=int(input())
    rlt=sum(map(int,input().split()))
    print('Right' if rlt>0 else 'Left' if rlt<0 else 'Equilibrium')