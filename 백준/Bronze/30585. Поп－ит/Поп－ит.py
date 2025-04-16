import sys
input=lambda:sys.stdin.readline().rstrip()
r,c=map(int,input().split())
arr=[input() for _ in range(r)]
nz,no=0,0
for i in range(r):
    nz+=arr[i].count('0')
    no+=arr[i].count('1')
print(no if no<nz else nz)