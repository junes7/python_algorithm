import sys
input=lambda:sys.stdin.readline().rstrip()
n,c=map(int,input().split())
arr=[*map(int,input().split())]
dic={}
for idx,num in enumerate(arr):
    if num in dic:
        dic[num][0]+=1
    else:
        dic[num]=[1,idx,num]
dic_sort=sorted(dic.values(),key=lambda x:(-x[0],x[1]))
rlt=[]
for frq in dic_sort:
    rlt+=[frq[2]]*frq[0]
print(*rlt)