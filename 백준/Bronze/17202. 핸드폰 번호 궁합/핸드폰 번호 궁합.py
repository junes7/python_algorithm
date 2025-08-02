import sys
input=lambda:sys.stdin.readline().rstrip()
ph1,ph2,rlt,tmp=input(),input(),"",[]
for i in range(8):
    rlt+=ph1[i]+ph2[i]
while len(rlt)!=2:
    for i in range(len(rlt)-1):
        tmp+=[str((int(rlt[i])+int(rlt[i+1]))%10)]
    rlt=''.join(tmp)
    tmp=[]
print(rlt)