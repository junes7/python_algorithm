import sys
input=lambda:sys.stdin.readline().rstrip()
while True:
    rlt=[]
    num=input().split()
    if num[0]=='0':
        break
    num.remove(num[0])
    for i in num:
        if len(rlt)==0:
            rlt.append(i)
        elif rlt[-1]!=i:
            rlt.append(i)
    rlt.append('$')
    print(' '.join(rlt))