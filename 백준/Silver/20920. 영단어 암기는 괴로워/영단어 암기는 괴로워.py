import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
dic={}
for _ in range(n):
    st=input()
    if len(st)>=m:
        dic[st]=1 if st not in dic else dic[st]+1
dic_sort=sorted(dic.items(),key=lambda x:(-x[1],-len(x[0]),x[0]))
for v in dic_sort:
    print(v[0])