import sys
input=lambda:sys.stdin.readline().rstrip()
n,dic=int(input()),{}
st=input()
for i in range(n):
    if st[i] in dic:
        dic[st[i]]+=1
    else:
        dic[st[i]]=1
maxn=max(dic.values())
for k,v in dic.items():
    if v==maxn:
        print(k,v)
        break