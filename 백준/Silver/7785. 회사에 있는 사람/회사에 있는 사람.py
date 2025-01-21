import sys
n=int(sys.stdin.readline())
nameList={}
for i in range(n):
    name,state=sys.stdin.readline().split()
    if(state=="enter"):
        nameList[name]=1
    elif(state=="leave"):
        nameList.pop(name,None);
nameList=sorted(nameList,reverse=True)
for nam in nameList:
    print(nam)