n,m=map(int,input().split())
bs={i:0 for i in range(1,n+1)}
for t in range(m):
    i,j,k=map(int,input().split())
    for o in range(i,j+1):
        bs[o]=k
for k in bs.values():
    print(k,end=' ')