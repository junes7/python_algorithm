import sys
input=lambda:sys.stdin.readline()
for _ in range(int(input())):
    tmp1,tmp2=[0]*26,[0]*26
    tmpstr1,tmpstr2=input(),input()
    for i in range(len(tmpstr1)-1):
        tmp1[ord(tmpstr1[i])-97]+=1
    for i in range(len(tmpstr2)-1):
        tmp2[ord(tmpstr2[i])-97]+=1
    cnt=0
    for i in range(26):
        cnt+= abs(tmp1[i]-tmp2[i])
    print("Case #%d: %d"%(_+1,cnt) )