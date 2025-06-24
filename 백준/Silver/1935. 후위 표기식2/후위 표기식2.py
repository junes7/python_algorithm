import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
st=input()
num=[int(input()) for _ in range(n)]
stack=[]
for i in st:
    if i.isalpha():
        stack.append(num[ord(i)-65])
    else:
        t=stack.pop()
        rlt=stack.pop()
        if i=='+':
            rlt+=t
        elif i=='-':
            rlt-=t
        elif i=='*':
            rlt*=t
        else:
            rlt/=t
        stack.append(rlt)
print("%.2f" % rlt)