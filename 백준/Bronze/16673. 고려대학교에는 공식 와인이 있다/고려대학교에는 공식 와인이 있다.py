import sys
input=lambda:sys.stdin.readline().rstrip()
c,k,p=map(int,input().split())
total=0
for i in range(1,c+1):
    total+=k*i+p*i**2
print(total)