import sys
input=lambda:sys.stdin.readline().rstrip()
st,rlt="",[]
for i in range(int(input())):
    c,*arr=map(int,input().split())
    for j in range(c):
        rlt+=[[arr[j],chr(65+i)]]
rlt.sort(key=lambda x:x[0])
for n in rlt:
    st+=n[1]    
print(st)