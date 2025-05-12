import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    arr=[*map(int,input().split())]
    total,l=0,len(arr)
    for i in range(1,l-1):
        for j in range(i+1,l):
            if arr[i]>arr[j]:
                arr[i],arr[j]=arr[j],arr[i]
                total+=1
    print(arr[0],total)