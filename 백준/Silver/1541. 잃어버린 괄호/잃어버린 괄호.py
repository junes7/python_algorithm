import sys
op,num=[],[]
t=sys.stdin.readline().split()[0]
if t.find('-')==-1:
    num+=list(map(int,t.split('+')))
    op=['+']
elif t.find('-')!=-1:
    t=t.split('-')
    op=['-']
    for i in t:
        if i.isdigit():
            num+=[int(i)]
        else:
            p=list(map(int,i.split('+')))
            num+=[sum(p)]
s=num[0]
for i in range(1,len(num)):
    s=s+num[i] if op[0]=='+' else s-num[i]
print(s)