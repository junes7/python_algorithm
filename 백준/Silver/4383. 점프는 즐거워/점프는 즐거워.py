import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    t=input()
    if t=="": break
    rlt,flag=[],True
    n,*arr=map(int,t.split())
    for i in range(n-1):
        if abs(arr[i]-arr[i+1])>n-1:
            flag=False
            break
        rlt+=[abs(arr[i]-arr[i+1])]
    if flag:
        rlt.sort()
        for i in range(n-2):
            if i+1!=rlt[i]:
                flag=False
                break
        print("Jolly" if flag else "Not jolly")
    else:
        print("Not jolly")