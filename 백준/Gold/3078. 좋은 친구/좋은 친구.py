import sys
n,k=map(int,sys.stdin.readline().rstrip().split())
name=[len(sys.stdin.readline().rstrip()) for i in range(n)]
len_name,cnt=[0]*21,0
for i in range(n):
    if k<i:
        len_name[name[i-k-1]]-=1
    cnt+=len_name[name[i]]
    len_name[name[i]]+=1
print(cnt)