import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    arr=[*map(int,input().split())]
    b=[arr[i]+arr[4+i] for i in range(4)]
    for i in range(3):
        if b[i]<1:
            b[i]=0 if i-2==0 else 1
    print(1*b[0]+5*b[1]+2*b[2]+2*b[3])