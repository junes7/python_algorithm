import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
tar=input()
i,cnt=0,0
while i<=len(st)-len(tar):
    if st[i:i+len(tar)]==tar:
        cnt+=1
        i+=len(tar)
    else:
        i+=1
print(cnt)