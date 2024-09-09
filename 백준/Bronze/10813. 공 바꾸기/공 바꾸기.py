n,m=map(int,input().split())
bs=[i+1 for i in range(n)]
for t in range(m):
    i,j=map(int,input().split())
    bs[i-1],bs[j-1]=bs[j-1],bs[i-1]
for k in bs:
    print(k,end=' ')