import sys
cnt=0
while 1:
    l,p,v=map(int,sys.stdin.readline().split())
    cnt+=1
    if l+p+v==0:
        break
    print(f"Case {cnt}: {l*(v//p)+v%p if v%p<=l else l*(v//p+1)}")