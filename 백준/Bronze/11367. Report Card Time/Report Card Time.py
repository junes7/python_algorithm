import sys
input=lambda:sys.stdin.readline().strip()
for _ in range(int(input())):
    name,grd=input().split()
    grd,rlt=int(grd),""
    if grd>=97:
        rlt="A+"
    elif grd>=90:
        rlt="A"
    elif grd>=87:
        rlt="B+"
    elif grd>=80:
        rlt="B"
    elif grd>=77:
        rlt="C+"
    elif grd>=70:
        rlt="C"
    elif grd>=67:
        rlt="D+"
    elif grd>=60:
        rlt="D"
    else:
        rlt="F"
    print(name,rlt)