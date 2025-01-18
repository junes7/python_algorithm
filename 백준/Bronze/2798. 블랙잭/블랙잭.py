import sys
n,m=map(int,sys.stdin.readline().split())
num=list(map(int,sys.stdin.readline().split()))
num.sort(reverse=True)
suml=[]
for i in range(n-2):
    for j in range(i+1,n-1):
        for k in range(j+1,n):
            sumn=num[i]+num[j]+num[k]
            if sumn==m:
                suml+=[sumn]
                break
            elif sumn<m:
                suml+=[sumn]
print(max(suml))