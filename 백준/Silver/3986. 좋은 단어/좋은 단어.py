import sys
input=lambda:sys.stdin.readline().rstrip()
rlt=0
for _ in range(int(input())):
    stack=[]    
    for c in list(input()):
        if stack and stack[-1]==c:
            stack.pop()
        else:
            stack+=[c]
    if not stack:
        rlt+=1
print(rlt)