import sys
input=lambda:sys.stdin.readline().rstrip()
n,l=map(int,input().split())
data=sorted([*map(int,input().split())])
st,cnt=data[0],1
for loc in data[1:]:
    if loc in range(st,st+l):
        continue
    else:
        st=loc
        cnt+=1
print(cnt)