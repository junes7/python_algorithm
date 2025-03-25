import sys
input=lambda:sys.stdin.readline().rstrip()
gen,add=map(int,input().split())
for _ in range(int(input())):
    consu=int(input())
    print(consu,consu*gen if consu<=1000 else 1000*gen+(consu-1000)*add)