import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
cntd,cntp=0,0
for _ in range(n):
    t=input()
    if t=='D':
        cntd+=1
    else:
        cntp+=1
    if abs(cntd-cntp)==2:
        break
print(f"{cntd}:{cntp}")