import sys
input=lambda:sys.stdin.readline().rstrip()
arr=sorted([[*map(int,input().split())] for _ in range(int(input()))],key=lambda x:(x[0],x[1],x[2]))
for c in arr:
    print(*c)