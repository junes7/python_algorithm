import sys
input=lambda:sys.stdin.readline().rstrip()
n,k=map(int,input().split())
medals=sorted([[*map(int,input().split())] for _ in range(n)],key=lambda x:(-x[1],-x[2],-x[3]))
for i in range(n):
    if medals[i][0]==k:
        for j in range(n):
            if medals[i][1:]==medals[j][1:]:
                print(j+1)
                break