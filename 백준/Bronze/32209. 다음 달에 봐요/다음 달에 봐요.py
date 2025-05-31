import sys
input=lambda:sys.stdin.readline().strip()
Q = int(input())
rlt,check = 0,True
while Q:
    a, b = map(int, input().split())
    if a == 1:
        rlt += b
    elif a == 2:
        rlt -= b
    if rlt < 0:
        check = False
    Q -= 1
print("See you next month" if check else "Adios")