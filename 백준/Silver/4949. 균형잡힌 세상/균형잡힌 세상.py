import sys
while 1:
    t=sys.stdin.readline().rstrip()
    if len(t)==1 and t=='.':
        break
    stack=[]
    for j in range(len(t)):
        if t[j]=='(' or t[j]=='[':
            stack+=[t[j]]
        elif t[j]==')':
            if len(stack)>0 and stack[-1]=='(':
                stack.pop()
            else:
                stack+=[t[j]]
        elif t[j]==']':
            if len(stack)>0 and stack[-1]=='[':
                stack.pop()
            else:
                stack+=[t[j]]
    print("yes" if len(stack)==0 else "no")