import sys
input=lambda:sys.stdin.readline().rstrip()
a=list(input())
b=list(input())
se=[0]*(len(a)+len(b))
for i in range(len(b)):
    for j in range(len(a)):
        se[i+j+1]+=int(a[j])*int(b[i])
t=0
for i in range(len(se)-1,-1,-1):
    se[i]+=t
    if se[i]>1:
        a=se[i]
        se[i]=se[i]%2

        t=a//2
    else:
        t=0
while se[0]==0:
    se.pop(0)
print(''.join(map(str,se)))