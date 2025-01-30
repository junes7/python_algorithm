import sys
num=[]
t=sys.stdin.readline().split()[0]
t=t.split('-')
num+=[int(i) if i.isdigit() else sum(list(map(int,i.split('+')))) for i in t]
s=num[0]
for i in range(1,len(num)):
    s-=num[i]
print(s)