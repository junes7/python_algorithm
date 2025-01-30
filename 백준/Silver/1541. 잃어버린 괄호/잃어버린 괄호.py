import sys
op,num=[],[]
t=sys.stdin.readline().split()[0]
if t.find('-')==-1:
    num+=list(map(int,t.split('+')))
    op=['+']
else:
    t=t.split('-')
    op=['-']
    num+=[int(i) if i.isdigit() else sum(list(map(int,i.split('+')))) for i in t]
s=num[0]
for i in range(1,len(num)):
    s=s+num[i] if op[0]=='+' else s-num[i]
print(s)