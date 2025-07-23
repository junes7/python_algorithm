import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    alpha,v=[0]*26,[]
    st,cnt,rlt=input(),0,0
    for i in range(len(st)):
        alpha[ord(st[i])-97]+=1
    for i in range(26):
        if alpha[i]:
            v+=[alpha[i]]
            cnt+=1
    v.sort()
    for i in range(cnt-2):
        rlt+=v[i]
    print(rlt)