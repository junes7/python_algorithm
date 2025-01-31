import sys
n,m=map(int,sys.stdin.readline().rstrip().split())
num=[0]+list(map(int,sys.stdin.readline().rstrip().split()))
s,sum_num=0,[]
for a in num:
    s+=a
    sum_num+=[s]
for i in range(m):
    a,b=map(int,sys.stdin.readline().rstrip().split())
    print(sum_num[b]-sum_num[a-1])