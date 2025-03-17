import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    id,strat,manage,tech=map(int,input().split())
    total=strat+manage+tech
    if strat>=35*0.3 and manage>=25*0.3 and tech>=40*0.3 and total>=55:
        print(id,total,"PASS")
    else:
        print(id,total,"FAIL")