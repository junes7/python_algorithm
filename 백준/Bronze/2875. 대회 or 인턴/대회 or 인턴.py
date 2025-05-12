import sys
input=lambda:sys.stdin.readline().rstrip()
n,m,k=map(int,input().split())
teams=0
while True:
    n-=2
    m-=1
    if n<0 or m<0 or n+m <k:
        break
    teams+=1
print(teams)