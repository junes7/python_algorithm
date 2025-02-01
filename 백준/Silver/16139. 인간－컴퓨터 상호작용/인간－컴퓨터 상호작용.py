import sys
s=sys.stdin.readline().rstrip()
q=int(sys.stdin.readline().rstrip())
arr=[[0]*len(s) for _ in range(26)]
for j in range(len(s)):
    idx=ord(s[j])-97
    for i in range(26):
        arr[i][j]=arr[i][j-1]
        if i==idx:
            arr[i][j]+=1
for _ in range(q):
    ch,start,end=sys.stdin.readline().rstrip().split()
    idx=int(ord(ch)-97)
    start,end=int(start),int(end)
    r=arr[idx][end]
    if start:
        r-=arr[idx][start-1]
    print(r)