import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
dic={}
for _ in range(n):
    arr=[*map(int,input().split())]
    for i in range(m):
        if arr[i]==1:
            if i+1 not in dic:
                dic[i+1]=1
            else:
                dic[i+1]+=1
dic_sort=sorted(dic.items(),key=lambda x:(-x[1],x[0]))
for c in dic_sort:
    print(c[0],end=' ')