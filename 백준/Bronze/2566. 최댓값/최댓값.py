num=[]
for i in range(9):
    num+=[list(map(int,input().split()))]
maxn,idx,idy=-1,0,0
for i in range(9):
    for j in range(9):
        if maxn<num[i][j]:
            maxn=num[i][j]
            idx=i+1
            idy=j+1
print(maxn)
print(idx,idy)