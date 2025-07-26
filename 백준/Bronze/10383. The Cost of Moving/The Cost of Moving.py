import sys
st=sys.stdin.read().split()
idx=0
for i in range(len(st)):
    if st[i].isdigit():
        if st[i]!='0':
            n,rlt=int(st[i]),0
            arr=sorted([[st[j],j-1-i] for j in range(i+1,n+i+1)])
            for j in range(n):
                rlt+=abs(arr[j][1]-j)
            idx+=1
            print("Site %d: %d" % (idx,rlt))