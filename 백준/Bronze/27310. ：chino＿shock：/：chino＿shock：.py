import sys
input=lambda:sys.stdin.readline().rstrip()
emo=input()
und_cnt,colo_cnt=0,0
l=len(emo)
for i in range(l):
    if emo[i]==':':
        colo_cnt+=1
    elif emo[i]=='_':
        und_cnt+=1
print(l+colo_cnt+und_cnt*5)