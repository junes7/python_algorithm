import sys
input=lambda:sys.stdin.readline().rstrip()
j,n=map(int,input().split())
cnt=0
for i in range(0,n):
    a,s=input(),0
    for k in range(0, len(a)):
        if a[k].isupper():
            s+=4
        elif a[k].islower() or a[k].isdigit():
            s+=2
        elif a[k]==' ':
            s+=1
    if j>=s: cnt+=1
print(cnt)