st,maxn=[],0

for i in range(5):
    st+=[input()]
    if maxn<len(st[i]):
        maxn=len(st[i])
for i in range(5):
    for j in range(maxn-len(st[i])):
        st[i]+=" "
for i in range(maxn):
    for j in range(5):
        if st[j][i]!=" ":
            print(st[j][i],end='')