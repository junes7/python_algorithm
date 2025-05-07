import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([[int(input()),i+1] for i in range(8)],reverse=True)
idx,total=[],0
for i in range(5):
    total+=arr[i][0]
    idx+=[arr[i][1]]
idx.sort()
print(total)
print(*idx)