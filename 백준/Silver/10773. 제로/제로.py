import sys
n=int(sys.stdin.readline())
stack=[]
for i in range(n):
    num=int(sys.stdin.readline())
    if num==0 and len(stack)>0:
        stack.pop()
    else:
        stack+=[num]
print(sum(stack))