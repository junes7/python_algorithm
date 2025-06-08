import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
total,end,cnt=0,0,0
for s in range(1,n+1):
    while total<n and end <n:
        total+=end+1
        end+=1
    if total== n:
        cnt+=1
    total-=s
print(cnt)