import sys
input=lambda:sys.stdin.readline().rstrip()
st,cnt=input(),0
while len(st)>1:
    t=int(st[0])
    for i in range(1,len(st)):
        t*=int(st[i])
    st=str(t)
    cnt+=1
print(cnt)