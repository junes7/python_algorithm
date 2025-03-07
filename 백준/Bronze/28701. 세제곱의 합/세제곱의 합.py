import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
s,m=0,0
for i in range(1,n+1):
    s+=i
    m+=i**3
print(s,s**2,m,sep="\n")