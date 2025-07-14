import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
dic={}
for _ in range(n):
    x,y=map(int,input().split())
    if y not in dic:
        dic[y]=[x]
    else:
        dic[y].append(x)
dic,rlt=dic.values(),0
for c in dic:
    c.sort()
    if len(c)<2:continue
    rlt+=c[1]-c[0]+c[-1]-c[-2]
    for j in range(1,len(c)-1):
        rlt+=min(abs(c[j]-c[j-1]),abs(c[j]-c[j+1]))
print(rlt)