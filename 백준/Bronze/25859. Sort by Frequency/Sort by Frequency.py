import sys
input=lambda:sys.stdin.readline().rstrip()
dic,st,rlt={},input(),""
for c in st:
    if c not in dic:
        dic[c]=1
    else:
        dic[c]+=1
dic_sort=sorted(dic.items(),key=lambda x:(-x[1],x[0]))
for c in dic_sort:
    rlt+=c[0]*c[1]
print(rlt)