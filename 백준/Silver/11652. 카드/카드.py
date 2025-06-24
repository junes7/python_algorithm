import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
dic={}
for _ in range(n):
    t=int(input())
    if t not in dic:
        dic[t]=1
    else:
        dic[t]+=1
dic_sort=sorted(dic.items(),key=lambda x:(-x[1],x[0]))
print(dic_sort[0][0])