import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
dic,rlt={},0
for c in arr:
    dic[c]=dic.get(c,0)+1
    rlt=max(rlt,dic.get(c))
print(rlt)