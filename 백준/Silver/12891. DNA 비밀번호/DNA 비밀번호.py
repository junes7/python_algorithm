import sys
s,p=map(int,sys.stdin.readline().rstrip().split())
dna=sys.stdin.readline().rstrip()
max_dna=list(map(int,sys.stdin.readline().rstrip().split()))
chk_dna=('A','C','G','T')
cnt_dna,cnt=[0]*4,0
def add_dna(d):
    for i in range(4):
        if d==chk_dna[i]:
            cnt_dna[i]+=1
def check_dna():
    for i in range(4):
        if cnt_dna[i]<max_dna[i]:
            return False
    return True
def del_dna(d):
    for i in range(4):
        if d==chk_dna[i]:
            cnt_dna[i]-=1
for i in dna[:p]:
    add_dna(i)
    cnt=1 if check_dna() else 0
for i in range(p,s):
    del_dna(dna[i-p])
    add_dna(dna[i])
    if check_dna():
        cnt+=1
print(cnt)