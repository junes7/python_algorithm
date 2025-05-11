import sys
input=lambda:sys.stdin.readline().rstrip()
b,c,d=map(int,input().split())
burgers=sorted([*map(int,input().split())],reverse=True)
sides=sorted([*map(int,input().split())],reverse=True)
drinks=sorted([*map(int,input().split())],reverse=True)
min_val,rlt=min(b,c,d),0
for i in range(min_val):
    rlt+=int((burgers[i]+sides[i]+drinks[i])*0.9)
rlt+=sum(burgers[min_val:]+sides[min_val:]+drinks[min_val:])
print(sum(burgers)+sum(sides)+sum(drinks),rlt,sep="\n")