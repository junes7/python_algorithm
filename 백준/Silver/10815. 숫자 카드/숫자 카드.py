import sys
n=int(sys.stdin.readline())
numList=list(map(int,sys.stdin.readline().split()))
m=int(sys.stdin.readline())
guessList=list(map(int,sys.stdin.readline().split()))
numList.sort()
for i in range(m):
    flag=False
    start,end=0,len(numList)-1
    while start<=end:
        mid=(start+end)//2
        if numList[mid]==guessList[i]:
            flag=True
            break
        elif numList[mid]>guessList[i]:
            end=mid-1
        else:
            start=mid+1
    print(1 if flag else 0,end=' ')