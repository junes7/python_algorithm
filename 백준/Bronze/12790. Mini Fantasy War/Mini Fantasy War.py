import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    arr=[*map(int,input().split())]
    for i in range(3):
        if arr[i]+arr[4+i]<1:
            arr[i]=0
            arr[4+i]=0 if i-2==0 else 1
    cp=0
    for i in range(2):
        cp+=1*arr[4*i+0]+5*arr[4*i+1]+2*arr[4*i+2]+2*arr[4*i+3]
    print(cp)