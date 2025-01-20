import sys
n=int(sys.stdin.readline())
ageList=[]
for i in range(n):
    age,name=sys.stdin.readline().split()
    ageList+=[[int(age),name]]
ageList.sort(key=lambda x:x[0])
for elem in ageList:
    print(elem[0],elem[1])