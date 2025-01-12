n,m=map(int,input().split())
num=[0]*(n+1)
for i in range(1,n+1):
    num[i]=i
for i in range(m):
    j,k=map(int,input().split())
    for t in range((k-j+1)//2):
        d=num[j+t]
        num[j+t]=num[k-t]
        num[k-t]=d
for i in range(1,n+1):
    print(num[i],end=' ')