import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
arr=[*map(int,input().split())]
called,cnt=[],0
len=max(arr)
for i in range(1,len+1):
    for j in range(n):
        if i<=arr[j]:
            if i not in called:
                called+=[i]
            else:
                cnt+=1
print(cnt)