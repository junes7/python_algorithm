import sys
n=int(sys.stdin.readline())

for i in range(n):
    paren=sys.stdin.readline()
    stack=[]
    for i in range(len(paren)):
        if paren[i]=='(':
            stack+=[paren[i]]
        elif paren[i]==')':
            if len(stack)>0 and stack[-1]=='(':
                stack.pop()
            else:
                stack+=[paren[i]]
    print("YES" if len(stack)==0 else "NO")