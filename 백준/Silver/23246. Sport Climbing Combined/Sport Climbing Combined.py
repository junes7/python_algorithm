import sys
input=lambda:sys.stdin.readline().rstrip()
total=[]
for _ in range(int(input())):
    idx,*rank=map(int,input().split())
    total+=[[idx,rank[0]*rank[1]*rank[2],sum(rank)]]
total.sort(key=lambda x:(x[1],x[2],x[0]))
for i in range(3):
    print(total[i][0],end=' ')