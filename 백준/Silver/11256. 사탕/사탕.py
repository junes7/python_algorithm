import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    j,n=map(int,input().split())
    arr=sorted([[*map(int,input().split())] for _ in range(n)],key=lambda x:-(x[0]*x[1]))
    for i in range(n):
        t=arr[i][0]*arr[i][1]
        if j-t<=0:
            print(i+1)
            break
        j-=t