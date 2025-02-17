import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
a,b=1,1
for i in range(2,n+1):
    a,b=b,(a+b)%15746
print(b)