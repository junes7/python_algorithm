import sys
n=int(sys.stdin.readline().rstrip())
num=0
for i in range(1,n+1):
    num,t=i,i
    for a in str(t):
        t+=int(a)
    if t==n:
        break
print(0 if num==n else num)