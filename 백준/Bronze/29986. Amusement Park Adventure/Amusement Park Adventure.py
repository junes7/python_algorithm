import sys
input=lambda:sys.stdin.readline().rstrip()
n,h=map(int,input().split())
arr=[*map(int,input().split())]
cnt=0
for i in range(n):
    if h>=arr[i]:
        cnt+=1
print(cnt)