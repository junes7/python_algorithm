import sys,math
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    x=int(input())
    s=0
    for _ in range(x):
        obj,quan,unit=input().split()
        s+=int(quan)*float(unit)
    print(f"${s:.2f}")