import sys
n=int(sys.stdin.readline())
cmd,stack=[],[]
for i in range(n):
    cmd=list(sys.stdin.readline().split())
    if int(cmd[0])==1:
        stack+=[int(cmd[1])]
    elif int(cmd[0])==2:
        if len(stack)==0:
            print(-1)
        else:
            print(stack.pop())
    elif int(cmd[0])==3:
        print(len(stack))
    elif int(cmd[0])==4:
        print(1 if not stack else 0)
    else:
        print(-1 if len(stack)==0 else stack[-1])