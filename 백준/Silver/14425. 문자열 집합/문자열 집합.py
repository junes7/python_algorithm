n,m=map(int,input().split())
s,r=[],0
for i in range(n):
    s+=[input()]
for j in range(m):
    if input() in s:
        r+=1
print(r)
