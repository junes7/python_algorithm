import sys
input=lambda:sys.stdin.readline().rstrip()
dic={}
for _ in range(int(input())):
    _,exp=input().split('.')
    if exp in dic:
        dic[exp]+=1
    else:
        dic[exp]=1
dic_sort=sorted(dic.items(),key=lambda x:x[0])
for c in dic_sort:
    print(*c)