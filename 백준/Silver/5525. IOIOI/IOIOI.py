import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=int(input()),int(input())
st=input()
rlt,i,cnt=0,0,0
while i<m-1:
    if st[i:i+3]=='IOI':
        i+=2
        cnt+=1
        if cnt==n:
            rlt+=1
            cnt-=1
    else:
        i+=1
        cnt=0
print(rlt)