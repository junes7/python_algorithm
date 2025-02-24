import sys
input=lambda:sys.stdin.readline().rstrip()
m=int(input())
num=0
for _ in range(m):
    cmd=input().split()
    if len(cmd)==1:
        if cmd[0]=='all':
            num=(1<<21)-1
        elif cmd[0]=='empty':
            num=0
    else:
        k=int(cmd[1])
        idx=1<<(k-1)
        if cmd[0]=='add':
            num |= idx
        elif cmd[0] == 'remove':
            num &= ~idx
        elif cmd[0] == 'toggle':
            num ^= idx
        elif cmd[0] == 'check':
            print(1 if num&idx else 0)