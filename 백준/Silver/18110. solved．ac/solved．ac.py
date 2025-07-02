import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
t=int(n*0.15+0.5)
arr=sorted([int(input()) for _ in range(n)])
total=0
for i in range(t,n-t):
    total+=arr[i]
print(int(total/(n-2*t)+0.5) if n-2*t>0 else 0)