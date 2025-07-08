import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
dic1,dic2,rlt={},{},0
for _ in range(n):
    st=input()
    dic1[st]=dic1.get(st,0)+1
for _ in range(n):
    st=input()
    dic2[st]=dic2.get(st,0)+1
for k in dic1.keys():
    if k in dic2:
        rlt+=min(dic1[k],dic2[k])
print(rlt)