import sys
input=lambda:sys.stdin.readline().rstrip()
num,op=[],[]
while 1:
    s=input()
    if s=='': break
    if s!='=':
        if s.isdigit():
            num+=[int(s)]
        else:
            op+=[s]
rlt=num[0]
for i in range(len(op)):
    if op[i]=='+':
        rlt+=num[i+1]
    elif op[i]=='-':
        rlt-=num[i+1]
    elif op[i]=='*':
        rlt*=num[i+1]
    elif op[i]=='/':
        rlt//=num[i+1]
print(rlt)