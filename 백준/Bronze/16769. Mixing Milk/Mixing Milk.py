import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[[*map(int,input().split())] for _ in range(3)]
for i in range(100):
    idx,nidx=i%3,(i+1)%3
    arr[idx][1],arr[nidx][1]=max(arr[idx][1]-(arr[nidx][0]-arr[nidx][1]),0),min(arr[nidx][0],arr[idx][1]+arr[nidx][1])
for c in arr:
    print(c[1])