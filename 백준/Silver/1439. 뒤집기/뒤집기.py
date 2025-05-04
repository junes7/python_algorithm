import sys
input=lambda:sys.stdin.readline().rstrip()
st,cnt=input(),0
for i in range(len(st)-1):
    if st[i]!=st[i+1]:
        cnt+=1
print((cnt+1)//2)