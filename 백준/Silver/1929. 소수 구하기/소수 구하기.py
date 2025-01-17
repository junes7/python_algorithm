import sys
st,end=map(int,sys.stdin.readline().split())
arr=[True for i in range(end+1)]
for i in range(2,int(end**1/2)+1):
    if arr[i]==True:
        j=2
        while i*j<=end:
            arr[i*j]=False
            j+=1
if st==1: st+=1
for i in range(st,end+1):
    if arr[i]:
        print(i)