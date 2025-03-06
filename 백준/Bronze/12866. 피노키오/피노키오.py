import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
st,r,mod=input(),1,1000000007
dict={'A':0,'C':0,'G':0,'T':0}
for i in range(len(st)):
    dict[st[i]]+=1
for k,v in dict.items():
    r*=v;
    r%=mod
print(r)