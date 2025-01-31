import sys
n,k=map(int,sys.stdin.readline().rstrip().split())
num=list(map(int,sys.stdin.readline().rstrip().split()))
num_sum,s=[],0
for a in num:
    s+=a
    num_sum+=[s]
r=num_sum[k-1]
for i in range(k,n):
    r=max(r,num_sum[i]-num_sum[i-k])
print(r)