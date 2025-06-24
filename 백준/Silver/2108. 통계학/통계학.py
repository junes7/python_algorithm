import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=sorted([int(input()) for _ in range(n)])
dic={}
for i in arr:
    if i in dic:
        dic[i]+=1
    else:
        dic[i]=1
dic_sort=sorted(dic.items(),key=lambda x:(-x[1],x[0]))
rlt=dic_sort[0][0] if len(dic_sort)==1 else dic_sort[1][0] if dic_sort[0][1]==dic_sort[1][1] else dic_sort[0][0]
print(round(sum(arr)/n),arr[n//2],rlt,arr[-1]-arr[0],sep="\n")