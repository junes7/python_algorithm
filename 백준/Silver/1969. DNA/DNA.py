import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
dna_list=[input() for _ in range(n)]
dna=['A','C','G','T']
rlt,h_dist="",0
for j in range(m):
    cnt=[0]*4
    for i in range(n):
        for k in range(4):
            if dna_list[i][j]==dna[k]:
                cnt[k]+=1
    sel_dna=dna[cnt.index(max(cnt))]
    rlt+=sel_dna
    for i in range(n):
        if dna_list[i][j]!=sel_dna:
            h_dist+=1
print(rlt,h_dist,sep="\n")