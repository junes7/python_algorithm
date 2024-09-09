max,idx=0,-1
for i in range(9):
    n=int(input())
    if max<n:
        max=n
        idx=i+1
print(max,idx,sep='\n')