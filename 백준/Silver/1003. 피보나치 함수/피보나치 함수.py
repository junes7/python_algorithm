import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    n=int(input())
    dpz,dpo=[1],[0]
    for i in range(n):
        dpz+=[dpo[i]]
        dpo+=[dpz[i]+dpo[i]]
    print(dpz[n],dpo[n])