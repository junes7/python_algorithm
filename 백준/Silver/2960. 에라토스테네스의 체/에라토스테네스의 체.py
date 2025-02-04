import sys
n,k=map(int,sys.stdin.readline().rstrip().split())
rem=[]
for i in range(2,n+1):
    if i not in rem:
        rem+=[i]
    for j in range(i*2,n+1,i):
        if j not in rem:
            rem+=[j]
print(rem[k-1])