import sys
input=lambda:sys.stdin.readline().rstrip()
m=int(input())
arr=[0]*(21)
for _ in range(m):
    cmd=input().split()
    if len(cmd)==1:
        if cmd[0]=='all':
            arr=[1]*(21)
        elif cmd[0]=='empty':
            arr=[0]*(21)
    else:
        idx=int(cmd[1])
        if cmd[0]=='add':
            arr[idx]=1
        elif cmd[0] == 'remove':
            arr[idx] = 0
        elif cmd[0] == 'toggle':
            arr[idx] = 1 - arr[idx]
        elif cmd[0] == 'check':
            print(arr[idx])