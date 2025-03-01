import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
cnt=0
arr=[*map(int,input().split())]
for i in range(1,n+1):
    for j in range(i,n+1):
        s=0
        for k in range(i,j+1):
            s+=arr[k-1]
        if j-i+1!=0 and s%(j-i+1)!=0: continue
        for k in range(i,j+1):
            if arr[k-1]==s//(j-i+1):
                cnt+=1
                break
print(cnt)