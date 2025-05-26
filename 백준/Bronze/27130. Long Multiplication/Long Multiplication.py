import sys
input=lambda:sys.stdin.readline().rstrip()
x=int(input())
y=input()
arr,s,m=[],0,1
for i in range(len(y)):
    arr+=[int(y[len(y)-1-i])*x]
    s+=arr[-1]*m
    m*=10
print(x,int(y),*arr,s,sep="\n")