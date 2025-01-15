N=int(input())
cnt,ran=1,2
if N==1: cnt=1
while ran<=N:
    ran+=6*cnt
    cnt+=1
print(cnt)