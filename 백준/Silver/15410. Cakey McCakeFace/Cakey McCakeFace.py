import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
m=int(input())
a=[*map(int,input().split())]
b=[*map(int,input().split())]
dic=dict()
for i in range(n):
    for j in range(m):
        if b[j]-a[i]>=0:
            if b[j]-a[i] in dic:
                dic[b[j]-a[i]]+=1
            else:
                dic[b[j]-a[i]]=1
dic_sort=sorted(dic.items(),key=lambda x:(-x[1],x[0]))
print(dic_sort[0][0] if len(dic_sort)>0 else 0)