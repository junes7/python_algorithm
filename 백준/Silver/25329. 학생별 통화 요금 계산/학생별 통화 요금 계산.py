import sys
input=lambda:sys.stdin.readline().rstrip()
dic={}
for i in range(int(input())):
    time,name=input().split()
    h,m=map(int,time.split(':'))
    t=h*60+m
    if name not in dic:
        dic[name]=[name,t]
    else:
        dic[name][1]+=t
for c in dic.values():
    n=0 if c[1]-100<0 else c[1]-100
    c[1]=10 + (n//50+(1 if n%50!=0 else 0))*3
dic_sort=sorted(dic.values(),key=lambda x:(-x[1],x[0]))
for c in dic_sort:
    print(c[0],c[1])