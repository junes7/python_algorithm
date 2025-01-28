import sys
n=int(sys.stdin.readline())
alist=sorted(map(int,sys.stdin.readline().split()))
blist=sorted(map(int,sys.stdin.readline().split()),reverse=True)
print(sum([alist[i]*blist[i]for i in range(n)]))