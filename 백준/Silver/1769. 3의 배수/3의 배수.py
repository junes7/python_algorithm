import sys
input=lambda:sys.stdin.readline().rstrip()
st,cnt=input(),0
while(len(st)>1):
    total=0
    cnt+=1
    for i in range(len(st)):
        total+=ord(st[i])-48
    st=str(total)
print(cnt,"YES" if int(st)%3==0 else "NO",sep="\n")