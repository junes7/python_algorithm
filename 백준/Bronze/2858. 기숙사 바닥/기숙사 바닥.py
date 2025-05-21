import sys
input=lambda:sys.stdin.readline().rstrip()
r,b=map(int,input().split())
LpW,LmW=(r+4)//2,r+b
for i in range(3,LpW):
    if (LpW-i)*i==LmW:
        print(LpW-i if LpW-i>i else i,end=' ')
        print(LpW-i if LpW-i<i else i)
        break