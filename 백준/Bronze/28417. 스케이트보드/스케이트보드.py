import sys
input=lambda:sys.stdin.readline().rstrip()
rlt = 0
for _ in range(int(input())):
    Skateboard = list(map(int, input().split()))
    Run = Skateboard[:2]
    Trick = Skateboard[2:]
    Run.sort(reverse=True)
    Trick.sort(reverse=True)
    rlt=max(rlt, Run[0] + sum(Trick[:2]))
print(rlt)