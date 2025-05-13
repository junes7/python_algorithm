import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    cre,total=0,0.0
    for _ in range(int(input())):
        c,g=input().split()
        c,g=int(c),float(g)
        cre+=c
        total+=c*g
    print(cre,round(total/cre,1))