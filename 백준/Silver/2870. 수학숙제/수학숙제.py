import sys
input=lambda:sys.stdin.readline().rstrip()
rlt=[]
for _ in range(int(input())):
    st=input()
    temp,num=[],""
    for c in st:
        if ord(c)-48 in range(10):
            num+=c
        else:
            if num:
                temp+=[int(num)]
            num=""
    if num:
        temp+=[int(num)]
    rlt+=temp
rlt.sort()
for i in rlt:
    print(i)