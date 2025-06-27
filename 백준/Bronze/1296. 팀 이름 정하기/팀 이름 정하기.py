import sys
input=lambda:sys.stdin.readline().rstrip()
yeondu=input()
t=int(input())
teams=sorted([input() for _ in range(t)])
total,ans=-1,""
for i in range(t):
    st=yeondu+teams[i]
    elem,rlt=[],1
    for c in "LOVE":
        elem+=[st.count(c)]
    for j in range(4):
        for k in range(j+1,4):
            rlt*=(elem[j]+elem[k])
    rlt%=100
    if total<rlt:
        total=rlt
        ans=teams[i]
print(ans)