import sys
input=lambda:sys.stdin.readline().rstrip()
s,stack,rlt,check=input(),[],"",False
for c in s:
    if c=='<':
        check=True
        for _ in range(len(stack)):
            rlt+=stack.pop()
    stack.append(c)
    if c=='>':
        check=False
        for _ in range(len(stack)):
            rlt+=stack.pop(0)
    if c==' ' and check==False:
        stack.pop()
        for _ in range(len(stack)):
            rlt+=stack.pop()
        rlt+=c
if stack:
    for _ in range(len(stack)):
        rlt+=stack.pop()
print(rlt)