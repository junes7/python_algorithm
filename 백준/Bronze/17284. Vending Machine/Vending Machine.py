import sys
input=lambda:sys.stdin.readline().rstrip()
m=5000
arr=[*map(int,input().split())]
for n in arr:
    m-=500 if n==1 else 800 if n==2 else 1000
print(m)