import sys
n=int(sys.stdin.readline())
numList=list(map(int,sys.stdin.readline().split()))
numDic={}
for i in range(n):
    numDic[numList[i]]=1 if numDic.get(numList[i])==None else numDic[numList[i]]+1
m=int(sys.stdin.readline())
checklist=list(map(int,sys.stdin.readline().split()))
for i in checklist:
    print(0 if numDic.get(i)==None else numDic.get(i),end=' ')